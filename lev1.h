#ifndef LEV1_H
#define LEV1_H
#include <string>

class lev1
{
public:
    lev1(std::string brand,double price,int memo);
    double getQ();
    std::string info();
private:
    std::string m_brand;
    double m_price;
    int m_memo;
};

#endif // LEV1_H
