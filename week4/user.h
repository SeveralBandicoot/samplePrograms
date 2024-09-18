
// zWeek12_Polymorphism.cpp : This file contains the 'main' function. Program
execution begins and ends there.
//
#ifndef User_h
#define User_h
#include<iostream>
#include<string>
using namespace std;
class User
{
public:
int age=44;
string First_name="1st";
string Last_name;
User() {
std::cout << "\n\ndefault User Constructor ";
}
User(int a, string fname, string lname)
{
age = a;
First_name = fname;
Last_name = lname;
}
void ToString()
{
cout << "\n age = " << age << " First name = " << First_name << " last = "
<< Last_name;
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
