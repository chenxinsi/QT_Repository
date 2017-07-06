#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
public:
    //contain none parameter constructed function
    Student();
    //contain parameter constructed function
    Student(string _name);
    //copy constructed function
    Student(const Student &stu);
    //dectructed function
    ~Student();
    void setName(string _name);
    string getName();
private:
    string m_strName;
};

#endif // STUDENT_H
