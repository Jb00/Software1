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
