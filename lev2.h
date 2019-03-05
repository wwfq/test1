#ifndef LEV2_H
#define LEV2_H
#include "lev1.h"

class studentP:public student
{
public:
    studentP(std::string fio,std::string facult,int kurs,int minGrad,bool payd);
    virtual void toNextKurs() override;
    virtual int getSpepend() override;
    virtual ~studentP() override;
private:
    bool m_payd;
};

#endif // LEV2_H
