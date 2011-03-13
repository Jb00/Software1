#ifndef LONGTERMCARE_H
#define LONGTERMCARE_H
#include <Facility.h>

class LongTermCare :public Facility
{

private:
    int NumberBedTotalLTC;
    int NumberBedAvailableLTC;


public:
    LongTermCare(QString,QString);
    ~LongTermCare();
};

#endif // LONGTERMCARE_H

