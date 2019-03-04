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

int main()
{
    QDateTime dat1,dat2;
    int num;
    while(true)
    {
        std::string dt1,dt2;
        std::cout<<"please insert datetime in format \"DD:MM:YYYY-HH:MM:SS\"\r\n";
        std::cout<<"date1:"; std::cin>>dt1;
        std::cout<<"date2:"; std::cin>>dt2;
        std::cout<<"numbers of procedures:"; std::cin>>num;
        dat1=QDateTime::fromString(dt1.data(),"dd:MM:yyyy-hh:mm:ss");
        dat2=QDateTime::fromString(dt2.data(),"dd:MM:yyyy-hh:mm:ss");
        if(dat1.isValid()&&dat2.isValid())
            break;
        std::cout<<"input incorrect, try again"<<std::endl;
        std::cin.clear();
    }
    long long int step=dat1.secsTo(dat2);
    std::cout<<step<<std::endl;
    for(int i=0;i<num;++i)
    {
        QDateTime temp=dat1.addSecs(step*i);
        std::cout<<"procedure #"+std::to_string(i+1)+" at "<<temp.toString("dd:MM:yyyy-hh:mm:ss").toStdString()<<std::endl;
    }
    std::cout<<"finished\n";
    return 0;
}

