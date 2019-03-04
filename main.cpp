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
//#define WRTEST
#define RDTEST
struct zad
{
    std::string name;
    QDate date;
    double sum_Q1;
    double sum_Q2;
    float discount;
};


int main()
{
    srand(time(nullptr));

#ifdef WRTEST
    std::ofstream fout;
    fout.open("test.txt",std::ios::binary);
    for(int i=0;i<1000000;++i)
    {
        zad val{"name"+std::to_string(rand()%10),QDate::currentDate(),rand()*1.0,rand()*1.0,rand()*1.0f};
        int siz=val.name.size();
        fout.write((char*)(&siz),sizeof(siz));
        fout.write(val.name.data(),siz);
        fout.write((char*)(&val.date),sizeof(val.date));
        fout.write((char*)(&val.sum_Q1),sizeof(val.sum_Q1));
        fout.write((char*)(&val.sum_Q2),sizeof(val.sum_Q2));
        fout.write((char*)(&val.discount),sizeof(val.discount));
    }
    fout.close();
#endif
#ifdef RDTEST
    std::list<zad> arr;
    std::ifstream fin;
    fin.open("test.txt",std::ios::binary);
    int siz;
    while(fin.read((char*)(&siz),sizeof(siz)))
    {
        char *val0=new char[siz];
        zad val;
        fin.read(val0,siz);
        val.name=val0;
        fin.read((char*)(&val.date),sizeof(val.date));
        fin.read((char*)(&val.sum_Q1),sizeof (val.sum_Q1));
        fin.read((char*)(&val.sum_Q2),sizeof (val.sum_Q2));
        fin.read((char*)(&val.discount),sizeof (val.discount));
        // std::cout<<val.name<<'\t'<<val.date.toString("dd:MM:yyyy").toStdString()<<'\t'<<val.discount<<std::endl;
        arr.push_back(std::move(val));
        delete []val0;
    }
    std::cout<<"arr size="<<arr.size()<<std::endl;
    int count=0;
    std::ofstream fout;
    fout.open("test.txt",std::ios::binary);
    for(auto&item:arr)
    {
        if(item.sum_Q1>=10000&&item.sum_Q2>=10000)
        {
            ++count;
            item.discount+=0.07f;
            if(item.discount>1)
                item.discount=1;
            int siz=item.name.size();
            fout.write((char*)(&siz),sizeof(siz));
            fout.write(item.name.data(),siz);
            fout.write((char*)(&item.date),sizeof(item.date));
            fout.write((char*)(&item.sum_Q1),sizeof(item.sum_Q1));
            fout.write((char*)(&item.sum_Q2),sizeof(item.sum_Q2));
            fout.write((char*)(&item.discount),sizeof(item.discount));
        }
    }
    std::cout<<"discount changer for "<<count<<" purhuasers"<<std::endl;

    fout.close();
#endif

    std::cout<<"finished\n";
    return 0;
}

