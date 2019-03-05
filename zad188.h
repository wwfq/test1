#ifndef ZAD188_H
#define ZAD188_H
#include <string>
#include <math.h>
#include <iostream>

class zad188
{
public:
    zad188();
    zad188(int hour,int min,int sec);
    ~zad188();
    int getDiffTo24();
    void add100();
    std::string info();
private:
    int m_hour;
    int m_min;
    int m_sec;
    void recalc();
};

#endif // ZAD188_H
