#include "DataDb.h"

DataDb::DataDb()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName ("127.0.0.1");
    db.setDatabaseName ("EOBCSTORAGE");
    db.setUserName ("root");
    db.setPassword ("stoic");
    if (!db.open()) {}
    /*    QMessageBox::warning(this, tr("Unable to open database"), tr("An error occured while "
                                                                     "opening the connection: ") + db.lastError().text());*/
}

void DataDb::startFacility(QList<Patient*> aListPatient)
{

}

