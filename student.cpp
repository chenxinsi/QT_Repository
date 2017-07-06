#include "student.h"
#include <iostream>
using namespace std;
Student::Student()
{
    cout << "Student()" << endl;
}

Student::~Student(){
    cout << "~Student" << endl;
}

void Student::setName(string _name){
    m_strName = _name;
}

string Student::getName(){
    return m_strName;
}




