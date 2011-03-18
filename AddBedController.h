#ifndef ADDBEDCONTROLLER_H
#define ADDBEDCONTROLLER_H
#include <QString>
#include <QList>
#include <Bed.h>
#include <Facility.h>
#include <Hospital.h>
#include <LongTermCare.h>
#include <iostream>
class AddBedController
{
private :
        QString numberBed;
        QString type;
        QString facility;
        AddBedController();
        static AddBedController* anInstance;
        QList<Bed*> listBed;
     //   Facility * aFacility2 = new Facility("TheFacility","Ottawa"); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE



public:
    static AddBedController* getInstance();
    QString addtoBed(QString,QString,Hospital*);


};

#endif // ADDBEDCONTROLLER_H
