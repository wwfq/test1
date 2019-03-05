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
#include "memory"
int main()
{
    std::vector<student*> list;
    std::shared_ptr<student> s1=std::make_shared<student>("student1","www",3,4);
    std::shared_ptr<student> s2=std::make_shared<studentP>("student2","www",3,4,true);
    std::shared_ptr<student> s3=std::make_shared<studentP>("student3","www",3,4,false);

    list.push_back( s1.get() );
    list.push_back(s2.get());
    list.push_back(s3.get());

    for(const auto&item:list)
    {
        std::cout<<item->info()<<std::endl;
        item->toNextKurs();
        std::cout<<item->info()<<std::endl;
    }
    return 0;
}


