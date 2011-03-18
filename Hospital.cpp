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
    std::cout<< listBedAcute.first()->getUse();
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
void Hospital::removeBedAcute(int number)
{
    while (number != 0 || !isEmptyAcute())
    {
        std::cout << listBedAcute.front()->getUse();
        if (listBedAcute.front()->getUse() == 0 )
        {
            listBedAcute.removeFirst();
            number++; //As the number is negative, ++
        }
    }
}

void Hospital::addBedComplex()
{
    Bed * aBed = new Bed(); //Create a new bed
    listBedComplex.append(aBed); //Add at the end of the list
    std::cout<< listBedComplex.first()->getUse();
}

int Hospital::getSizeComplex()
{
    return listBedComplex.size();
}

bool Hospital::isEmptyComplex()
{
    return listBedComplex.isEmpty();
}

//Remove a bed Acute
void Hospital::removeBedComplex(int number)
{
    while (number != 0 || !isEmptyComplex())
    {
        std::cout << listBedComplex.front()->getUse();
        if (listBedComplex.front()->getUse() == 0 )
        {
            listBedComplex.removeFirst();
            number++; //As the number is negative, ++
        }
    }
}


