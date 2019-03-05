#include "lev2.h"

lev2::lev2(std::string brand,double price,int memo,int sim):
    lev1(brand,price,memo),m_sim(sim)
{

}

double lev2::getQ()
{
    return lev1::getQ()*m_sim;
}

std::string lev2::info()
{
    return lev1::info()+", lev2(sim: "+std::to_string(m_sim)+")";
}
