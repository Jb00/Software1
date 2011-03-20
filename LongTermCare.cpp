#include "LongTermCare.h"

LongTermCare::LongTermCare(QString aName, QString anArea)
    :Facility(aName, anArea)
{
}

LongTermCare::~LongTermCare()
{

}

//Add Bed LTC
void LongTermCare::addBedLTC()
{
    Bed * aBed = new Bed(); //Create a new bed
    listBedLTC.append(aBed); //Add at the end of the list
    std::cout<< listBedLTC.first()->getUse();                   //TO REMOVE TEST
}

int LongTermCare::getSizeLTC()
{
    return listBedLTC.size();
}

bool LongTermCare::isEmptyLTC()
{
    return listBedLTC.isEmpty();
}

//Remove a bed LTC
bool LongTermCare::removeBedLTC(int number)
{
    int loop=0;
    while (number != 0 || !isEmptyLTC())
    {
        std::cout << listBedLTC.front()->getUse();              //TO REMOVE TEST
        if (listBedLTC.front()->getUse() == 0 )
        {
            listBedLTC.removeFirst();
            number++; //As the number is negative, ++
        }
        if (loop >= getSizeLTC())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}

void LongTermCare::addPatient(Patient* aPatient)
{
    listPatient.append(aPatient);
}

bool LongTermCare::removePatientWL(Patient* aPatient)
{
    int position= listWL.indexOf(aPatient);// Return -1 if not in the list
    std::cout << "THE POSITION"<<position;
    if( position != -1) //If it is in the list
    {
        listWL.removeAt(position);
        return true; //Success remove
    }

    return false; //Fail to remove
}

int LongTermCare::getSizePatient()
{
    return listPatient.size();
}


void LongTermCare::addWaitingList(Patient * aPatient)
{
    listWL.append(aPatient);
}

int LongTermCare::getSizeWL()
{
    return listWL.size();
}
