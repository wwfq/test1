#include "lev2.h"

studentP::studentP(std::string fio, std::string facult, int kurs, int minGrad,bool payd):
    student(fio,facult,kurs,minGrad),m_payd(payd)
{

}
int studentP::getSpepend()
{
    return 0;
}

void studentP::toNextKurs()
{
    if(m_payd)
        student::toNextKurs();
}

studentP::~studentP()
{

}
