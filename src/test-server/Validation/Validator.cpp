//
// Created by Kyle Piddington on 1/19/16.
//

#include "Validator.h"
#include "PlaneCorrelationError.h"



Validator::Validator(const TestCase tc, std::shared_ptr<ClientSocket> receptionSocket):
tc(tc)
{
   reportThread = std::thread(Validator::ValidatorThreadRoutine,this,receptionSocket);

}

Validator::~Validator() {

}

void Validator::endSimulation() {
   reportThread.join();
   unsigned long expectedPlanes = tc.getPlanes().size();
   for (auto result : results) {

      if(result.getPlanes().size() != expectedPlanes)
      {
         errors.push_back(std::shared_ptr<PlaneCorrelationError> (new PlaneCorrelationError(tc.getPlanes().size(),
                                                    result.getPlanes().size(), result.getTime())));
      }
   }
}

const std::vector<std::shared_ptr<TestCaseError>> & Validator::getErrors()const {
   return errors;
}

bool Validator::hasErrors()const {
   return errors.size() > 0 || !recievedResults();
}

void Validator::ValidatorThreadRoutine(Validator * v, std::shared_ptr<ClientSocket> sock) {
   while(sock->hasData())
   {
      CDTIReport rept;
      try
      {
         (*sock) >> rept;
         v->results.push_back(TestCaseResult::fromGoogleProtobuf(rept));
         v->gotResults = true;

      }
      catch(std::exception) {
         //log that shit
      }
   }
}

bool Validator::recievedResults() const {
   return this->gotResults;
}