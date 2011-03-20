#include "Hospital.h"

Hospital::Hospital(QString aName, QString anArea)
    :Facility( aName,  anArea)
{

}

Hospital::~Hospital()
{

}

//Add a bed Acute
void Hospital::addBedAcute()
{
    Bed * aBed = new Bed(); //Create a new bed
    listBedAcute.append(aBed); //Add at the end of the list
}

int Hospital::getSizeAcute()
{
    return listBedAcute.size();
}

bool Hospital::isEmptyAcute()
{
    return listBedAcute.isEmpty();
}

//Remove a bed Acute

bool Hospital::removeBedAcute(int number)
{
    int loop=0;                     //Will be used to make sure we dont check more than the number of actual bed. Incase they are all Used.

    number = number * -1 ; // To put the number positive

    if (listBedAcute.isEmpty() || (number > listBedAcute.size())) //Make sure the list isn't empty
        return false;

    while (number != 0 )
    {
        if (listBedAcute.front()->getUse() == 0 )
        {
            listBedAcute.removeFirst();
            number--;
        }
        if (loop > getSizeAcute())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}

//Add Bed Complex
void Hospital::addBedComplex()
{
    Bed * aBed = new Bed();         //Create a new bed
    listBedComplex.append(aBed);    //Add at the end of the list
}

int Hospital::getSizeComplex()
{
    return listBedComplex.size();
}

bool Hospital::isEmptyComplex()
{
    return listBedComplex.isEmpty();
}

//Remove a bed Complex
bool Hospital::removeBedComplex(int number)
{
    int loop=0;

    number = number * -1 ; // To put the number positive

    if (listBedComplex.isEmpty() || (number > listBedComplex.size())) //Make sure the list isn't empty
        return false;

    while (number != 0 )
    {
        if (listBedComplex.at(loop)->getUse() == 0 )
        {
            listBedComplex.removeAt(loop);
            number--;
        }
        if (loop >= getSizeComplex())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}

void Hospital::addPatientAcute(Patient * aPatient)
{

    listAcute.append(aPatient);
}

void Hospital::addPatientComplex(Patient * aPatient)
{
    listComplex.append(aPatient);
}

bool Hospital::NUsedBedComplex() //If we want to return bed #, simply return bed # or -1 . -1 fail and bed# = win.
{
    int loop=0;
    if (listBedComplex.isEmpty()) //If the list of bed is empty, then obviously return false
        return false;

    while(loop < getSizeComplex())
    {
        if (listBedComplex.at(loop)->getUse() == 0 )
        {
            listBedComplex.at(loop)->setUse(1);
            return true; //We found an empty bed for the patient
        }
        loop++;
    }
    return false; //No empty bed
}

bool Hospital::NUsedBedAcute() //If we want to return bed #, simply return bed # or -1 . -1 fail and bed# = win.
{
    int loop=0;
    if (listBedAcute.isEmpty()) //If the list of bed is empty, then obviously return false
        return false;

    while(loop < getSizeAcute())
    {
        if (listBedAcute.at(loop)->getUse() == 0 )
        {
            listBedAcute.at(loop)->setUse(1);
            return true; //We found an empty bed for the patient
        }
        loop++;
    }
    return false; //No empty bed
}


