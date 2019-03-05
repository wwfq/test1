#include "zad194.h"

zad194::zad194():zad191 (),m_x1(0),m_x2(0),m_y1(0),m_y2(0)
{
}

zad194::zad194(int x1,int x2,int y1,int y2,int speed,int hour,int min,int sec):zad191(speed,hour,min,sec),m_x1(x1),m_x2(x2),m_y1(y1),m_y2(y2)
{
    if(m_x2<m_x1)
        std::swap(m_x2,m_x1);
    if(m_y2<m_y1)
        std::swap(m_y2,m_y1);
}
std::string zad194::info()
{
    return std::string("x1=")+std::to_string(m_x1)+std::string(" x2=")+std::to_string(m_x2)+std::string(" y1=")+std::to_string(m_y1)+
            std::string(" y2=")+std::to_string(m_y2)+" "+zad191::info();
}
int zad194::getP()
{
    return static_cast<int>(floor((m_x2-m_x1)*0.5*(m_y2-m_y1)));
}
