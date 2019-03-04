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
    srand(time(nullptr));
    int i1=0,i2=0;
    int state =1;
    while(true)
    {
        std::cout<<"state="<<state<<std::endl;
        i1=rand()%2;
        i2=rand()%2;
        switch(state)
        {
        case 1:
            if(i2==0)
                state=4;
            break;
        case 2:
            if(i1==0)
                state=3;
            break;
        case 3:
            if(i1==1)
                state=1;
            else if(i1==1)
                state=2;
            break;
        case 4:
            if(i1==0&&i2==0)
                state=3;
            break;
        }
    }
    return 0;
}

