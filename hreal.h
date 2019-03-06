#ifndef HREAL_H
#define HREAL_H
#include "lev1.h"

class humanR:public human
{
public:
    humanR(std::string name,int age);
    virtual void sayHi(const human&opon) override;
    virtual void tallS() override;
    virtual ~humanR(){}
private:
};

#endif // HREAL_H
