#include "hnoformal.h"

humanN::humanN(std::string name,int age):human(name,age)
{

}

void humanN::sayHi(const human&opon)
{
     std::cout<<getName()+" :Hi "+opon.getName()<<std::endl;
}

void humanN::tallS()
{
    std::cout<<getName()+" :My name is "+getName()+ ", i'm "+std::to_string(getAge())+" years old, and i'm notFormal"<<std::endl;
}
