#include "Facilitystaff.h"

FacilityStaff::FacilityStaff(int aId, QString aName, QString aFacility)
    :User( aId,  aName, aFacility)
{
    typeUser="FacilityStaff";  //Set the type of User
}

FacilityStaff::~FacilityStaff()
{
}

