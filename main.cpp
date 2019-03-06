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
#include "lev1.h"
#include "memory"
#include "hformal.h"
#include "hnoformal.h"
#include "hreal.h"
#include <stack>

int main()
{
    std::stack<std::string> list;
    list.push("Alexander");
    list.push("Andey");
    list.push("Anastasia");
    list.push("Irina");
    list.push("Natali");
    list.push("Pavel");
    list.push("Roman");
    list.push("Svetlana");
    list.push("Sergey");
    list.push("Tatiana");

    std::vector<human*> hList;
    while(!list.empty())
    {
        switch(rand()%3+1)
        {
        case 1:
            hList.push_back(new humanF(list.top(),rand()%21+20));
            list.pop();
            break;
        case 2:
            hList.push_back(new humanN(list.top(),rand()%21+20));
            list.pop();
            break;
        case 3:
            hList.push_back(new humanR(list.top(),rand()%21+20));
            list.pop();
            break;
        }
    }

    for(int i=0;i<hList.size();++i)
    {
        hList[i]->tallS();
        for(int j=0;j<hList.size();++j)
        {
            if(j==i)
                continue;
            hList[i]->sayHi(*hList[j]);
            hList[j]->sayHi(*hList[i]);
        }
    }
    for(auto& item:hList)
        delete item;

    return 0;
}


