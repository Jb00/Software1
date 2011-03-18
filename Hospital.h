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
    QList<Bed*> listBedComplex;
    QList<Bed*> listBedAcute;

public:
    Hospital(QString,QString);
    ~Hospital();
    void addBedAcute();
    void removeBedAcute(int);
    int getSizeAcute();
    bool isEmptyAcute();

    void addBedComplex();
    void removeBedComplex(int);
    int getSizeComplex();
    bool isEmptyComplex();

};

#endif // HOSPITAL_H
