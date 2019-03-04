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

//#define WRTEST

struct zad
{
    std::string fName;
    double diag;
    double price;
};


int main()
{
    srand(time(nullptr));

#ifdef WRTEST
    std::ofstream fout;
    fout.open("test.txt",std::ios::binary);
    for(int i=0;i<10000+rand()%200;++i)
    {
        zad val;
        val.fName="fName"+std::to_string(rand()%5+1);
        val.diag=round(rand()%500/11.0);
        val.price=rand()%10000/15.0;

        int siz=val.fName.size();
        fout.write((char*)(&siz),sizeof(siz));
        fout.write(val.fName.data(),siz);
        fout.write((char*)(&val.diag),sizeof(val.diag));
        fout.write((char*)(&val.price),sizeof(val.price));
    }
    fout.close();
#else
    std::ifstream fin;
    int count=0;
    fin.open("test.txt",std::ios::binary);
    int siz;
    while(fin.read((char*)(&siz),sizeof(siz)))
    {
        zad val;
        char *val0=new char[siz];
        fin.read(val0,siz);
        double v1;
        fin.read((char*)(&v1),sizeof (v1));
        double v2;
        fin.read((char*)(&v2),sizeof (v2));

        if(v1>32&&std::string(val0)=="fName0")
        {
            std::cout<<siz<<'\t'<<val0<<'\t'<<v1<<'\t'<<v2<<std::endl;
            ++count;
        }
        delete []val0;
    }
    std::cout<<count<<std::endl;
#endif
    std::cout<<"finished\n";
    return 0;
}

