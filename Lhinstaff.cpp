#include "Lhinstaff.h"

LhinStaff::LhinStaff(int aId, QString aName, QString aFacility)
        :User( aId,  aName, 0) //We set WorkAtFacility to 0 as LHIN Staff doesn't work to a facility
{
    typeUser ="LhinStaff";
}

LhinStaff::~LhinStaff()
{

}
