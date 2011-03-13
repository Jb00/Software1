#ifndef BED_H
#define BED_H
#include <User.h>


class Bed
{
private :
        int bedNumber;

public:
    Bed();
    ~Bed();
    void setNumber(int);
    int getNumber();

};

#endif // BED_H
