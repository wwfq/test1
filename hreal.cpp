#include "hreal.h"

humanR::humanR(std::string name,int age):human(name,age)
{

}

void humanR::sayHi(const human&opon)
{
    if(getAge()>=opon.getAge())
        std::cout<<getName()+" :Hi "+opon.getName()<<std::endl;
    else
        std::cout<<getName()+" :Hello "+opon.getName()<<std::endl;
}

void humanR::tallS()
{
    std::cout<<getName()+" :My name is "+getName()+ ", i'm "+std::to_string(getAge())+" years old, and i'm realist"<<std::endl;
}
