#ifndef BED_H
#define BED_H
#include <User.h>


class Bed
{
private :
        int bedNumber;
        int use;

public:
    Bed();
    ~Bed();
    void setNumber(int);
    int getNumber();
    int getUse();

};

#endif // BED_H
