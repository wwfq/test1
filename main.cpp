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
#include "lev2.h"

int main()
{
    srand(static_cast<uint>(time(nullptr)));
    for(int i=0;i<10;++i)
    {
        lev2 val(std::to_string(rand()%100),100.2,pow(2,rand()%5+1),rand()%3+1);
        std::cout<<val.info()<<std::endl;
    }
    return 0;
}


