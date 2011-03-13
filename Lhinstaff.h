#ifndef LHINSTAFF_H
#define LHINSTAFF_H
#include <User.h>

//We use inheritance for User - > LHIN Staff
class LhinStaff : public User
{
public:
    LhinStaff(int, QString, QString);
    ~LhinStaff();
};

#endif // LHINSTAFF_H
