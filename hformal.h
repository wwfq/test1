#ifndef HFORMAL_H
#define HFORMAL_H
#include "lev1.h"

class humanF:public human
{
public:
    humanF(std::string name,int age);
    virtual void sayHi(const human& opon) override;
    virtual void tallS()override;
    virtual ~humanF(){};
private:
};

#endif // HFORMAL_H
