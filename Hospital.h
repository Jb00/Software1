#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <Facility.h>

//We use inheritance for Facility - > Hospital
class Hospital :public Facility
{
private :
    int NumberBedTotalAcute;
    int NumberBedAvailableAcute;
    int NumberBedTotalComplex;
    int NumberBedAvailableComplex;

public:
    Hospital(QString,QString);
    ~Hospital();
};

#endif // HOSPITAL_H
