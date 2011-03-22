#ifndef DATACONTROLLER_H
#define DATACONTROLLER_H

#include<QList>
#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>
#include "Patient.h"
#include "Facility.h"
class DataController
{
private :
        DataController();
        static DataController* anInstance;
        QList<Patient*> listPatient;
        QSqlDatabase db;
public:
        static DataController* getInstance();
        void setupPatients(QList<Patient*>*);
        void setupFacility(QList<Facility*>*);

};

#endif // DATACONTROLLER_H
