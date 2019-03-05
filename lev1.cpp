#include "lev1.h"

lev1::lev1(std::string brand,double price,int memo):
    m_brand(brand),m_price(price),m_memo(memo)
{   }

double lev1::getQ()
{
    return m_memo/m_price;
}

std::string lev1::info()
{
    return "lev1(brand: "+m_brand+"; price: "+std::to_string(m_price)+"; memo: "+std::to_string(m_memo)+")";
}
