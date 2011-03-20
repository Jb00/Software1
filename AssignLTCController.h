#ifndef ASSIGNLTCCONTROLLER_H
#define ASSIGNLTCCONTROLLER_H

#include <QList>
#include <QString>
#include "Patient.h"
#include "Facility.h"
#include "LongTermCare.h"


class AssignLTCController
{
private :
        static AssignLTCController* anInstance;
        AssignLTCController();
public:
    static AssignLTCController* getInstance();
    void assignBed(QList<Patient*>, LongTermCare*);
};

#endif // ASSIGNLTCCONTROLLER_H
