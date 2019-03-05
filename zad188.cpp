#include "zad188.h"

zad188::zad188(int hour,int min,int sec):m_hour(hour),m_min(min),m_sec(sec)
{
    recalc();
}
zad188::zad188():m_hour(0),m_min(0),m_sec(0)
{
    recalc();
}
zad188::~zad188()
{
    std::cout<<"object destructed"<<std::endl;
}
std::string zad188::info()
{
    return std::to_string(m_hour)+" h. "+std::to_string(m_min)+" .m "+std::to_string(m_sec)+" sec.";
}
int zad188::getDiffTo24()
{
    return (24-m_hour)*60-m_min-(m_sec>0?1:0);
}
void zad188::add100()
{
    m_min+=100;
    recalc();
}
void zad188::recalc()
{
    if(m_sec>=60)
    {
        m_min+=floor(m_sec/60);
        m_sec=m_sec%60;
    }
    if(m_min>=60)
    {
        m_hour+=floor(m_min/60);
        m_min=m_min%60;
    }
    if(m_hour>=24)
        m_hour=m_hour%24;
}
