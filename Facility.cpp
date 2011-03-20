#include "Facility.h"

Facility::Facility(QString aName, QString anArea)
{
    name = aName;
    area = anArea;
    id = 88; //DataBase
}

Facility::~Facility()
{
}


/*
void Facility::addBed()
{
    Bed * aBed = new Bed(); //Create a new bed
    listBed.append(aBed); //Add at the end of the list
    std::cout<< listBed.first()->getUse();
}

int Facility::getBedSizeTotal()
{
    return listBed.size();
}


bool Facility::empty()
{
    return listBed.isEmpty();
}

void Facility::removeBed(int number)
{
    number = number * -1 ;
    while (number != 0 || !empty())
    {
        std::cout << listBed.front()->getUse();
        if (listBed.front()->getUse() == 0 )
        {
            listBed.removeFirst();
            number--;
        }
    }
}*/



