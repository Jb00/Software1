
#include "SystemAdministrator.h"

SystemAdministrator::SystemAdministrator(int aId, QString aName, QString aFacility)
         :User( aId,  aName, 0) //We set WorkAtFacility to 0 as System Administrator doesn't work to a facility
{
    typeUser ="SystemAdministrator";
}

SystemAdministrator::~SystemAdministrator()
{

}
