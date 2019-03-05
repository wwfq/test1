#ifndef ZAD194_H
#define ZAD194_H
#include "zad191.h"

class zad194:public zad191
{
public:
    zad194();
    zad194(int x1,int x2,int y1,int y2,int speed,int hour,int min,int sec);
    std::string info();
    int getP();
    private:
        int m_x1;
    int m_x2;
    int m_y1;
    int m_y2;

};

#endif // ZAD194_H
