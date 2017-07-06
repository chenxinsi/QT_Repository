#include <QCoreApplication>
#include <iostream>
#include "car.h"
#include "student.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Car car;
    car.run();

    Student *stu = new Student();
    stu -> setName("xinsi");
    cout << stu -> getName() << endl;
    delete stu;
    stu = NULL;
    return a.exec();
}
