
// zWeek12_Polymorphism.cpp : This file contains the 'main' function. Program
execution begins and ends there.
//
#ifndef baseBall_H
#define baseBall_H
#include<iostream>
#include<string>
using namespace std;
class p3_baseBall
{
public:
int age=44;
string First_name="1st";
string Last_name="last";
p3_baseBall() {
std::cout << "\ndefault User Constructor ";
}
p3_baseBall(int a, string fname, string lname)
{
age = a;
First_name = fname;
Last_name = lname;
}
void display()
{
std::cout << "\n\nBaseball Player Display ";
cout << "\n age = " << age << " First name = " << First_name << " last = "
<< Last_name;
}
/*virtual void display() // Note we need
virtual to reject the Base and use the Child
{
std::cout << "\n\nUser Display ";
}*/
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
