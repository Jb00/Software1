#include "AssignHospitalController.h"

AssignHospitalController* AssignHospitalController::anInstance =NULL;

AssignHospitalController::AssignHospitalController()
{
}

AssignHospitalController::~AssignHospitalController()
{
}

AssignHospitalController* AssignHospitalController::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new AssignHospitalController; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

void AssignHospitalController::addtoBed(Patient * aPatient, Hospital * aHospital,QString aType)
{
    if(aType == "Acute")
    {
            if (aHospital->NUsedBedComplex())
            {
                aHospital->addPatientComplex(aPatient);
            }
    else
         if(aType == "Complex")
             if (aHospital->NUsedBedAcute())
             {
                 aHospital->addPatientAcute(aPatient);
             }
        else
            std::cout<<"ERROR";                                         //Test only , should not happens.
    }
}



