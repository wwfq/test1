#ifndef LEV1_H
#define LEV1_H
#include <string>

class student
{
public:
    student(std::string fio,std::string facult,int kurs,int minGrad);
    virtual void toNextKurs();
    virtual int getSpepend();
    virtual ~student();
    std::string info();
protected:
    std::string m_fio;
    std::string m_facult;
    int m_kurs;
    int m_minGrad;
};

#endif // LEV1_H
