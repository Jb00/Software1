#ifndef LONGTERMCARE_H
#define LONGTERMCARE_H
#include <Facility.h>
#include "Patient.h"

class LongTermCare :public Facility
{

private:
    int NumberBedTotalLTC;
    int NumberBedAvailableLTC;
    QList<Bed*> listBedLTC;
    QList<Patient*> listPatient; //List of patient at the facility
    //Needed For WL
    QList<Patient*> listWL; //WaitingList


public:
    LongTermCare(QString,QString);
    ~LongTermCare();

    void addBedLTC();
    bool removeBedLTC(int);
    int getSizeLTC();
    bool isEmptyLTC();
    void addPatient(Patient*);
    bool removePatientWL(Patient*);
    int getSizePatient();
    void addWaitingList(Patient*);
    int getSizeWL();
};

#endif // LONGTERMCARE_H

