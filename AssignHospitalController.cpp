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
    std::cout <<"Hospital size Before Acute: "<< aHospital->getSizeAcute()<<std::endl;
    std::cout <<"Hospital size Before Complex: " << aHospital->getSizeComplex()<<std::endl
            ;
    if(aType == "Complex")
    {
            if (aHospital->NUsedBedComplex())
            {
                std::cout <<"COMPLEX";
                aHospital->addPatientComplex(aPatient);
            }
    }
    else
        if(aType == "Acute")
        {
             if (aHospital->NUsedBedAcute())
             {
                 std::cout <<"SUPER INSIDE"<<std::endl;
                 aHospital->addPatientAcute(aPatient);
             }
        }

        else
            std::cout<<"ERROR";                                         //Test only , should not happens.


    std::cout <<"Hospital size After Acute : "<< aHospital->getSizeAcute()<<std::endl;
    std::cout <<"Hospital size After Complex : " << aHospital->getSizeComplex()<<std::endl;
}



