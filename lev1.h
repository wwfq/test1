#ifndef LEV1_H
#define LEV1_H
#include <string>
#include <iostream>

class human
{
public:
    human(std::string name,int age);
    virtual void sayHi(const human& opon)=0;
    virtual void tallS()=0;
     int getAge()const;
     std::string getName() const;
     virtual ~human(){}
private:
    std::string m_name;
    int m_age;
};

#endif // LEV1_H
