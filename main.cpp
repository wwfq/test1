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
#define WRTEST
#define RDTEST



class zad186
{
public:
    zad186(int min,int sec);
    std::string info();
    int secTotal();
private:
    int m_min;
    int m_sec;
};

int main()
{
    srand(static_cast<uint>(time(nullptr)));
    for(int i=0;i<10;++i)
    {
        zad186 val(rand()%10,rand()%1000);
        std::cout<<val.info()<<"  "<<val.secTotal()<<std::endl;
    }
    return 0;
}

zad186::zad186(int min,int sec):m_min(min),m_sec(sec)
{
    if(m_sec>=60)
    {
        m_min+=round(m_sec/60);
        m_sec=m_sec%60;
    }
}
int zad186::secTotal()
{
    return m_min*60+m_sec;
}
std::string zad186::info()
{
    return (m_min>0?std::to_string(m_min)+"min.":"")+(m_sec>0?std::to_string(m_sec)+"sec.":"");
}
