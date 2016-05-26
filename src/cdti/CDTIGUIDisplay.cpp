#include <QtWidgets/qlabel.h>
#include <QtWidgets/qscrollarea.h>
#include <iostream>
#include <math.h>
#include "CDTIGUIDisplay.h"
#include <common/Maths.h>
#include <sstream>

Proximate* CDTIGUIDisplay::proximateImage = nullptr;
Resolution* CDTIGUIDisplay::resolutionImage = nullptr;
Traffic* CDTIGUIDisplay::trafficImage = nullptr;
Ownship* CDTIGUIDisplay::ownshipImage = nullptr;
Air* CDTIGUIDisplay::airImage = nullptr;

CDTIGUIDisplay::CDTIGUIDisplay(int width, int height): width(width), height(height)
{
    resize(width, height);
    int size = 80;
    trafficImage = new Traffic(size,size);
    proximateImage = new Proximate(size,size);
    resolutionImage = new Resolution(size,size);
    ownshipImage = new Ownship(size,size);
    airImage = new Air(size,size);
}

CDTIGUIDisplay::CDTIGUIDisplay(): CDTIGUIDisplay(1280, 720)
{
    std::string filepath = __FILE__;
    filepath = filepath.substr(0,filepath.rfind("/") + 1) .append("../..");
    QDir projectDir(filepath.c_str());
}

void CDTIGUIDisplay::setupLayout()
{
    QPalette Pal(palette());
    //set backgroud color
    Pal.setColor(QPalette::Background, Qt::black);
    setAutoFillBackground(true);
    setPalette(Pal);
}
void CDTIGUIDisplay::paintEvent(QPaintEvent *event)
{
    //TODO Move to airplane implementation?
    //setup loading directory
    //render ownship
    //render gridlines
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setRenderHint(QPainter::SmoothPixmapTransform);
    const QBrush brush();
    painter.setPen(QPen(Qt::white, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.translate(width / 2, height / 2);

    //paint the grid cirlces
    for (int i = 0, radius = 100; i <= numGridCircles; i++, radius += 100.0f)
    {
        painter.drawEllipse(QPointF(0.0f, 0.0f),(float)radius,(float)radius);
        std::ostringstream out;
        out.precision(2);
        out << radius / scale << " NMI";
        painter.drawText(5+radius,0,QString(out.str().c_str()));
    }
    //render ownship. everything is relative to it, so it never moved from the center
    if(ownshipImage)
    {
        ownshipImage->drawPlane(this, width / 2, height / 2, false);
    }
   
    float largestD = 18.0f;
    
    
    //if there is a report to be read, attempt to render planes here
    mtx.lock();
    if(currentReport)
    {
        int planeSize = currentReport->planes_size();
        for(int i = 0; i < planeSize; i++)
        {
            CDTIPlane report = currentReport->planes(i);
            float d = fmax(report.position().y(), report.position().x());
            largestD = fmax(largestD, d);
        }
        //scale = height/2/(largestD*1.05f);
        
        for(int i = 0; i < planeSize; i++)
        {
            bool direction = false;
            float angle = 0;
            CDTIPlane report = currentReport->planes(i);
            PlaneImage* currentImage = nullptr;
            switch(report.severity())
            {
                case CDTIPlane_Severity_RESOLUTION:
                    currentImage = resolutionImage;
                    break;
                case CDTIPlane_Severity_TRAFFIC:
                    currentImage = trafficImage;
                    break;
                case CDTIPlane_Severity_AIR:
                    currentImage = airImage;
                    break;
                case CDTIPlane_Severity_PROXIMATE:
                default:
                    currentImage = proximateImage;
                    break;
            }
            Vector3d vel(report.velocity().x(), report.velocity().y(), report.velocity().z());
            if(vel.getMagnitude()  < 1e-6)
            {
                if(currentImage)
                    //Positions are NED relative, Y is x, x is y etc.
                    currentImage->drawPlane(this, width / 2.0f - report.position().y() * scale, height / 2.0f - report.position
                            ().x() * scale, direction, angle);
            }
            else {
                direction = true;
                angle = radToDeg(atan2(vel.y, vel.x));
                if(currentImage) {
                    Vector3d currentPlaneVel = Vector3d(report.velocity().x(), report.velocity().y(), report.velocity().z());
                    std::string newline = "\r\n";

                    //Plane labels -- ID, Position, Velocity, Direction (angle)
                    std::ostringstream out;
                    out << "ID: " << report.id() << newline << "Position: (";
                    std::cout.precision(4);
                    out << report.position().x() << ", ";
                    out << report.position().y() << ", ";
                    out << report.position().z() << ")" << newline << "Velocity: ";
                    out << currentPlaneVel.getMagnitude();
                    //std::cout << currentPlaneLabel << std::endl;

                    //Positions are NED relative, Y is x, x is y etc.
                    currentImage->drawPlane(this, width / 2.0f + report.position().y() * scale,
                                            height / 2.0f - report.position
                                                    ().x() * scale, direction, angle, out.str());
                }
            }
            //render planes here

        }
    }
    mtx.unlock();
}

void CDTIGUIDisplay::init()
{

    setupLayout();
    show();
}

void CDTIGUIDisplay::renderReport(CDTIReport &report)
{
    mtx.lock();
    CDTIReport copyReport(report);
    reportData = copyReport;
    currentReport = &reportData;
    std::string log(reportData.DebugString());
    mtx.unlock();

    std::cout << log << std::endl;
    update();
}
bool CDTIGUIDisplay::event(QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = (QKeyEvent *)event;
        if (keyEvent->key() == Qt::Key_Up)
        {
            scale *= 1.05;
            std::cout << "Scale: " << scale << std::endl;
            update();
        }
        if (keyEvent->key() == Qt::Key_Down)
        {
            scale /= 1.05;
            std::cout << "Scale: " << scale << std::endl;
            update();
        }
    }

    return QMainWindow::event(event);
}


