#include <QtWidgets/qlabel.h>
#include <QtWidgets/qscrollarea.h>
#include <iostream>
#include "Display.h"

Display::Display(int width, int height):width(width),height(height)
{
    resize(width, height);
}

Display::Display(): Display(1280,720)
{
}

void Display::setupLayout()
{

    QPalette Pal(palette());
    //set backgroud color
    Pal.setColor(QPalette::Background, Qt::black);
    setAutoFillBackground(true);
    setPalette(Pal);

    //draw Circles
}

void Display::paintEvent(QPaintEvent *event)
{
    //TODO Move to airplane implementation?
    //setup loading directory
    QDir projectDir(".");
    projectDir.cdUp();
    projectDir.cdUp();
    //open image and scale it
    QImageReader imageReader(projectDir.filePath("resources/awesome.png"));
    QImage image = imageReader.read();
    image = image.scaled(100,100,Qt::IgnoreAspectRatio);

    if(image.isNull())
        std::cout << "IT'S NO USE: "<< imageReader.errorString().toStdString() << std::endl;

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
    }

    //paint planes
    painter.setPen(QPen(QColor(200,200,200,100), 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.setBrush(QBrush(image));
    painter.translate(-50,-50);
    painter.drawRect(0,0,100,100);
}