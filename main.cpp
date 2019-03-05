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
#include "zad188.h"
#include "zad191.h"
#include "zad194.h"

int main()
{
    srand(static_cast<uint>(time(nullptr)));
    for(int i=0;i<10;++i)
    {
        zad194 val(rand(),rand(),rand(),rand(),rand()%60+1,rand(),rand(),rand());
        std::cout<<val.info()<<std::endl;
        val.add100();
        std::cout<<val.info()<<std::endl;
        std::cout<<val.getP()<<std::endl;
    }
    return 0;
}


