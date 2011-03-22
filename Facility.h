#ifndef FACILITY_H
#define FACILITY_H
#include <QString>
#include <QList>
#include "Patient.h"
#include "Bed.h"
#include <iostream>

class Facility
{

private :
        QString name;
        int id;
        QString area; //Do we agree to let it like that ? or We'll use an area objecT? We needed it for some waiting list and such. See later ?
        int NumberBedtotal;
        bool hasWaitingList;
        int x;
        int y;



public:
    Facility(int,QString,int,int); // Might need to pass NumberBedtotal, depends of the UI. I'll assume no. // Uselss comment now?
    ~Facility();

};

#endif // FACILITY_H
