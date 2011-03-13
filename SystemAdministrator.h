#ifndef SYSTEMADMINISTRATOR_H
#define SYSTEMADMINISTRATOR_H
#include <User.h>

class SystemAdministrator : public User
{
public:
    SystemAdministrator(int, QString, QString);
    ~SystemAdministrator();
};

#endif // SYSTEMADMINISTRATOR_H
