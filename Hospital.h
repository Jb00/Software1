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
    QList<Patient*> listAcute;
    QList<Patient*> listComplex;


public:
    Hospital(QString,QString);
    ~Hospital();
    void addBedAcute();
    bool removeBedAcute(int);
    int getSizeAcute();
    bool isEmptyAcute();

    void addBedComplex();
    bool removeBedComplex(int);
    int getSizeComplex();
    bool isEmptyComplex();
    void addPatientComplex(Patient*);
    void addPatientAcute(Patient*);
    bool NUsedBedComplex(); //Non Used Bed for Complex Care. True = success false = fail
    bool NUsedBedAcute();   //Non Used Bed for Acute care. True = success false = fail

};

#endif // HOSPITAL_H
