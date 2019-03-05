#ifndef LEV2_H
#define LEV2_H
#include "lev1.h"

class lev2:public lev1
{
public:
    lev2(std::string brand,double price,int memo,int sim);
     double getQ();
     std::string info();
private:
    int m_sim;
};

#endif // LEV2_H
