#ifndef HNOFORMAL_H
#define HNOFORMAL_H
#include "lev1.h"

class humanN:public human
{
public:
    humanN(std::string name,int age);
    virtual void sayHi(const human&opon) override;
    virtual void tallS() override;
    virtual ~humanN(){}
private:

};


#endif // HNOFORMAL_H
