#ifndef ZAD191_H
#define ZAD191_H
#include "zad188.h"

class zad191:public zad188
{
public:
    zad191();
    zad191(int speed,int hour,int min,int sec);
    int getOpers();
    std::string info();
private:
    int m_speed;
};

#endif // ZAD191_H
