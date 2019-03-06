#include "hformal.h"

humanF::humanF(std::string name,int age):human(name,age)
{

}

void humanF::sayHi(const human&opon)
{
    std::cout<<getName()+" :Hello "+opon.getName()<<std::endl;
}

void humanF::tallS()
{
    std::cout<<getName()+": My name is "+getName()+ ", i'm "+std::to_string(getAge())+" years old, and i'm formalist"<<std::endl;
}
