#ifndef FACILITY_H
#define FACILITY_H
#include <QString>

class Facility
{

private :
        QString name;
        int id;
        QString area; //Do we agree to let it like that ? or We'll use an area objecT? We needed it for some waiting list and such. See later ?
        int NumberBedtotal;
        bool hasWaitingList;

public:
    Facility(QString,QString); // Might need to pass NumberBedtotal, depends of the UI. I'll assume no.
    ~Facility();

};

#endif // FACILITY_H
