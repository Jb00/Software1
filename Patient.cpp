#include "Patient.h"

Patient::Patient(QString aFName,QString aLName,QDate aDateBirth,QDate aDateAdmission,QString aTypeNeeded,QString aFacility, int aBed)
{
    id = '5'; //To do with Db
    fName = aFName;
    lName = aLName;
    dateBirth = aDateBirth;
    dateAdmission = aDateAdmission;
    typeCareNeeded = aTypeNeeded;
    facilityName = aFacility;
    bedNumber = aBed;
}



void Patient::setNeeded(QString aType)
{
    typeCareNeeded =aType;
}

void Patient::setFacility(QString aFacility)
{
    facilityName =aFacility;
}

void Patient::setBed(int aBed)
{
    bedNumber =aBed;
}



int Patient::getId()
{
    return id;
}

QString Patient::getFName()
{
    return fName;
}

QString Patient::getLName()
{
    return lName;
}

QDate Patient::getDateBirth()
{
    return dateBirth;
}

QDate Patient::getAdmission()
{
    return dateBirth;
}

QString Patient::getNeeded()
{
    return typeCareNeeded;
}

QString Patient::getFacility()
{
    return facilityName;
}

int Patient::getBed()
{
    return bedNumber;
}


