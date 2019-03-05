#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QTextStream>
#include <QTextCodec>
#include <QFile>
#include <iostream>
#include <memory>
#include <windows.h>
#include <locale>
#include <testlib1.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <chrono>
#include <deque>
#include <list>
#include <algorithm>
#include <QString>
#include <QStringList>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <random>
#include <ctime>
#include <stack>
#include <random>
#include <fstream>
#include <ios>
#include <algorithm>
#include <string>
#include <QDate>
#include <QDateTime>
//#define WRTEST
//#define RDTEST

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


int main()
{
    srand(static_cast<uint>(time(nullptr)));
    for(int i=0;i<10;++i)
    {
        zad188 val(rand(),rand(),rand());
        std::cout<<val.info()<<std::endl;
        val.add100();
        std::cout<<val.info()<<std::endl;
        std::cout<<val.getDiffTo24()<<std::endl;
    }
    return 0;
}

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
