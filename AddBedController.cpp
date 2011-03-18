#include "AddBedController.h"

AddBedController* AddBedController::anInstance = NULL; // Global static pointer used to ensure a single instance of the class.

AddBedController* AddBedController::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new AddBedController; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

AddBedController::AddBedController()
{
}

QString AddBedController::addtoBed(QString aNumberBed, QString aType, QString aFacility)
{
    bool ok; //to make sure the conversion String to number Worked;
    int numberBedInt; //To hold the String to int
    numberBed = aNumberBed;
    type = aType;
    facility = aFacility;
    Hospital * aFacility2 = new Hospital("TheFacility","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE

    numberBedInt = numberBed.toInt(&ok);

    //Verify if it is a integer. If it isn't, return -1;
    if (!ok)
    {
        return "-1";
    }

    if(aType == "Acute")
    {
        if (numberBedInt < 0)
        {
            aFacility2->removeBedAcute(numberBedInt);
        }
        else
        {
            for (int i=0; i< numberBedInt ; i++)
            {
                aFacility2->addBedAcute();
            }
        }
        numberBed.setNum(aFacility2->getSizeAcute()); //Set as integer

    }
    else
        if(aType == "Complex")
        {
            if (numberBedInt < 0)
            {
                aFacility2->removeBedComplex(numberBedInt);
            }
            else
            {
                for (int i=0; i< numberBedInt ; i++)
                {
                    std::cout<<"Test bitch";
                    aFacility2->addBedComplex();
                }
            }
            numberBed.setNum(aFacility2->getSizeComplex()); //Set as integer

        }
    else
        if(aType == "LTC")
        {
            if (numberBedInt < 0)
            {
                aFacility2->removeBedAcute(numberBedInt);
            }
            else
            {
                for (int i=0; i< numberBedInt ; i++)
                {
                    aFacility2->addBedAcute();
                }
            }
            numberBed.setNum(aFacility2->getSizeAcute()); //Set as integer

        }


    return numberBed  ;
}



/*        for (int i=0; i< numberBedInt; i++) //Add numberBedInt # of bed           //TO BE USED IF WE WANT TO CREATE IT FROM HERE AND NOT FROM FACILITY, BUT IT DOESNT WORK. PASSO NLY POINTER
        {
            Bed * aBed = new Bed();
            listBed.append(aBed); //Add at the end of the list
        }
        aFacility2->addBed(&listBed);

        */
