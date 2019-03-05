#include "zad191.h"

zad191::zad191():zad188(),m_speed(0)
{ }

zad191::zad191(int speed,int hour,int min,int sec):
    zad188(hour,min,sec),m_speed(speed)
{
}

int zad191::getOpers()
{
    return m_speed>0?static_cast<int>(floor(getDiffTo24()/m_speed)):0;
}

std::string zad191::info()
{
    return zad188::info()+" "+std::to_string(m_speed)+" min per oper";
}
