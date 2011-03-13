#include "User.h"

User::User(int aId, QString aName, QString aFacility)
{
    id = aId;
    name = aName;
    workAtFacility = aFacility;
}

User::~User()
{

}

//Return id
int User::getId()
{
    return id;
}

//Return Name
QString User::getName()
{
    return name;
}

//Return Type
QString User::getType()
{
    return typeUser;
}

//Return Where the user works, 0 if not associated with a facility
QString User::getFacility()
{
    return workAtFacility;
}


