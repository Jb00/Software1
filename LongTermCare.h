#ifndef LONGTERMCARE_H
#define LONGTERMCARE_H
#include <Facility.h>

class LongTermCare :public Facility
{

private:
    int NumberBedTotalLTC;
    int NumberBedAvailableLTC;
    QList<Bed*> listBedLTC;


public:
    LongTermCare(QString,QString);
    ~LongTermCare();

    void addBedLTC();
    bool removeBedLTC(int);
    int getSizeLTC();
    bool isEmptyLTC();
};

#endif // LONGTERMCARE_H

