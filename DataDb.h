#ifndef DATADB_H
#define DATADB_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>
#include <string.h>
#include <QList>
#include "Patient.h"

class DataDb
{
private :
        QSqlDatabase db;
public:
    DataDb();
    void startFacility(QList<Patient*>);
};

#endif // DATADB_H
