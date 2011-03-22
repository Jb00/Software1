#-------------------------------------------------
#
# Project created by QtCreator 2011-03-12T10:55:08
#
#-------------------------------------------------

QT       += core gui
QT       += sql

TARGET = Objects
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    User.cpp \
    Patient.cpp \
    Facilitystaff.cpp \
    Lhinstaff.cpp \
    SystemAdministrator.cpp \
    Bed.cpp \
    Facility.cpp \
    Hospital.cpp \
    LongTermCare.cpp \
    Waitinglist.cpp \
    AddBedController.cpp \
    AddWLController.cpp \
    AssignLTCController.cpp \
    AssignHospitalController.cpp \
    DataDb.cpp \
    DataController.cpp

HEADERS  += mainwindow.h \
    User.h \
    Patient.h \
    Facilitystaff.h \
    Lhinstaff.h \
    SystemAdministrator.h \
    Bed.h \
    Facility.h \
    Hospital.h \
    LongTermCare.h \
    Waitinglist.h \
    AddBedController.h \
    AddWLController.h \
    AssignLTCController.h \
    AssignHospitalController.h \
    DataDb.h \
    DataController.h

FORMS    += mainwindow.ui
