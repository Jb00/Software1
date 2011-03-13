#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QDate>
//Patient.h
//Define a patient


class Patient
{

private :
        int id;
        QString fName;
        QString lName;
        QDate dateBirth;
        QDate dateAdmission;
        QString typeCareNeeded;
        QString facilityName;
        int bedNumber;

public:
    Patient(QString,QString,QDate,QDate,QString,QString,int);
    ~Patient();

    int getId();
    QString getFName();
    QString getLName();
    QDate getDateBirth();
    QDate getAdmission();
    QString getNeeded();
    QString getFacility();
    int getBed();

    void setNeeded(QString);
    void setFacility(QString);
    void setBed(int);
};
#endif // PATIENT_H


