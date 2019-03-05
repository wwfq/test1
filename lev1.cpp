#include "lev1.h"

student::student(std::string fio,std::string facult,int kurs,int minGrad):
    m_fio(fio),m_facult(facult),m_kurs(kurs),m_minGrad(minGrad)
{
}

void student::toNextKurs()
{
    if(m_minGrad>3)
    {
        ++m_kurs;
        m_minGrad=0;
    }
}

int student::getSpepend()
{
    switch(m_minGrad)
    {
    case 4:
        return 200;
    case 5:
        return 300;
    default:
        return 0;
    }
}

student::~student()
{

}

std::string student::info()
{
    return m_fio+" "+m_facult+" "+std::to_string(m_kurs)+" "+std::to_string(m_minGrad)+" "+std::to_string(getSpepend());
}
