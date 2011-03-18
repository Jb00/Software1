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
    std::cout<<"size";
    std::cout << getSizeAcute();
    std::cout<<"size";
    number = number *-1;
    if (listBedAcute.isEmpty())
        return -1;

    while (number != 0 )
    {

        std::cout <<listBedAcute.front()->getUse();
        if (listBedAcute.front()->getUse() == 0 )
        {
            listBedAcute.removeFirst();
            number--;               //As the number is negative, ++
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
    while (number != 0 || !isEmptyComplex())
    {
        std::cout << listBedComplex.front()->getUse();
        if (listBedComplex.front()->getUse() == 0 )
        {
            listBedComplex.removeFirst();
            number++; //As the number is negative, ++
        }
        if (loop >= getSizeComplex())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}


