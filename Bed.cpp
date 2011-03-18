#include "Bed.h"

Bed::Bed()
{
    use = 500;
}

Bed::~Bed()
{

}

int Bed::getNumber()
{
    return bedNumber;
}

//Might be needed to "Move bed to an other location ? Else remove Set
void Bed::setNumber(int aNumber)
{
    bedNumber = aNumber;
}

int Bed::getUse()
{
    return use;
}
