#ifndef FACILITYSTAFF_H
#define FACILITYSTAFF_H
#include <User.h>


//We use inheritance for User - > FacilityStaff
class FacilityStaff : public User
{
public:
    FacilityStaff(int, QString, QString);
    ~FacilityStaff();

};

#endif // FACILITYSTAFF_H
