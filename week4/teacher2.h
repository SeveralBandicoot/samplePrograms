
#ifndef TEACHER2_H
#define TEACHER2_H
#include <iostream>
#include<string>
#include "p2_User2.h"
class p2_Teacher2 : public p2_User2 {
public:
int numberOfStudents = 1;
string schedule = "teacher schedule";
string courses = "Programming";
p2_Teacher2() {
std::cout << "\n\nderived teacher constructor ";
}
/*Teacher(int nos, string days, string course)
{
numberOfStudents=nos;
schedule=days;
courses=course;
}*/
void display() {
std::cout << "\n\n Teacher Display = Adjunct ";
cout << "\n age = " << age << " First name = " << First_name << "
last = " << Last_name;
std::cout << "\n class size = " << numberOfStudents << " Schedule = "
<< schedule << " courses = " << courses;
}
};
#endif
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started:
// 1. Use the Solution Explorer window to add/manage files
// 2. Use the Team Explorer window to connect to source control
// 3. Use the Output window to see build output and other messages
// 4. Use the Error List window to view errors
// 5. Go to Project > Add New Item to create new code files, or Project > Add
Existing Item to add existing code files to the project
// 6. In the future, to open this project again, go to File > Open > Project and
select the .sln file
