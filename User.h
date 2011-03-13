#ifndef USER_H
#define USER_H

#include <QString>
//User.h
//Define a user



class User
{


 protected :
        QString name;
        QString typeUser;
        int id;
        QString workAtFacility;

public:
        User(int, QString, QString);
        ~User();

        int getId();
        QString getName();
        QString getFacility();
        QString getType();

};

#endif // USER_H
