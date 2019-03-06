#include "lev1.h"

human::human(std::string name,int age):
    m_name(name),m_age(age)
{

}

int human::getAge() const
{
    return m_age;
}

std::string human::getName() const
{
    return m_name;
}
