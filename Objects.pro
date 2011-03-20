#-------------------------------------------------
#
# Project created by QtCreator 2011-03-12T10:55:08
#
#-------------------------------------------------

QT       += core gui

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
    AssignHospitalController.cpp

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
    AssignHospitalController.h

FORMS    += mainwindow.ui
