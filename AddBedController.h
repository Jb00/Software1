#ifndef ADDBEDCONTROLLER_H
#define ADDBEDCONTROLLER_H
#include <QString>
#include <QList>
#include <Bed.h>
#include <Facility.h>
#include <Hospital.h>
#include <LongTermCare.h>
#include <iostream>
#include <typeinfo>
class AddBedController
{
private :
        AddBedController();
        static AddBedController* anInstance;
        QList<Bed*> listBed;


public:
    static AddBedController* getInstance();
    QString addtoBed(QString,QString,Hospital*);

};

#endif // ADDBEDCONTROLLER_H
