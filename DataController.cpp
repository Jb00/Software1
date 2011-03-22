#include "DataController.h"

DataController* DataController::anInstance =NULL;

DataController::DataController()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName ("127.0.0.1");
    db.setDatabaseName ("EOBCSTORAGE");
    db.setUserName ("root");
    db.setPassword ("bobpw");
    if (!db.open()) {}
    /*    QMessageBox::warning(this, tr("Unable to open database"), tr("An error occured while "*/

}

DataController* DataController::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new DataController; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}


void DataController::setupPatients(QList<Patient*> *aPatientList)
{

    QSqlQuery query;

    QString HealthCardNum;
    QString firstName ;
    QString lastName;
    QDate dateAdmitted ;
    QDate datePlacedOnWaitingList;
    int reqCare;
    int occCare;

    //Test Facility id
    int facilityID =5;

     query.exec("SELECT HealthCardNum, firstName,lastName,dateAdmitted,datePlacedOnWaitingList,reqCare,occCare FROM facility WHERE facilityID = " + facilityID);

     while (query.next()) {
         HealthCardNum =query.value(0).toString();
         firstName = query.value(1).toString();
         lastName = query.value(2).toString();
         dateAdmitted = query.value(3).toDate();
         datePlacedOnWaitingList = query.value(4).toDate();
         reqCare = query.value(5).toInt();
         occCare = query.value(6).toInt();
         Patient * aPatient = new Patient(HealthCardNum, firstName,lastName,dateAdmitted,datePlacedOnWaitingList,reqCare,occCare);
         aPatientList->append(aPatient);

     }


}

void DataController::setupFacility(QList<Facility *> *aFacilityList)
{

    int id,x,y;
    QString facilityName;
    QSqlQuery query;
    query.exec("SELECT id,facilityName,x,y FROM facility ");

    while (query.next()) {
        id = query.value(0).toInt();
        facilityName = query.value(1).toString();
        x = query.value(2).toInt();
        y = query.value(3).toInt();

        Facility * aFacility = new Facility(id, facilityName,x,y);
        aFacilityList->append(aFacility);

    }
}







