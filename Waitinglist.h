#ifndef WAITINGLIST_H
#define WAITINGLIST_H
#include <QList>
#include "Patient.h"

class WaitingList
{
private :
    QList<Patient*> listPatient;

public:

    WaitingList();
    void addToWL(Patient*);
    void removeFromWL(Patient*);

};

#endif // WAITINGLIST_H
