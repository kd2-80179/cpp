#include <iostream>

namespace Nstudent

{
    class student
    {

    private:
        int roll;
        char name;
        float marks;

    public:
        void initstudent()
        {
            std::cout << "enter roll,name and marks=   ";
            std::cin >> this->roll >> this->name >>  this->marks;
        }
        void printStudentonconsole()
        {
            std::cout << "student = " << roll << this->name << this << marks;
        }
    };

}
int main()
{
    using namespace Nstudent;
    student s1;
    student s2;

    s1.initstudent();
    s2.printStudentonconsole();

    s1. initstudent();
    s2.printStudentonconsole();

    return 0;
}
