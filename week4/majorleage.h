
Page
1
of 2
// zWeek12_Polymorphism.cpp : This file contains the 'main' function. Program
execution begins and ends there.
//
#ifndef baseballPlayer_H
#define baseballPlayer_H
#include<iostream>
#include<string>
#include "p3_baseBall.h"
using namespace std;
class p3_majorLeague : public p3_baseBall
{
public:
int hr=1;
double rbi = 0;
p3_majorLeague() {
std::cout << "\ndefault majorLeague Constructor ";
rbi = 2;
}
p3_majorLeague(int a, string fname, string lname)
{
std::cout << "\nfull majorLeague Constructor ";
rbi = 3;
hr = a;
First_name = fname;
Last_name = lname;
}
void display()
{
std::cout << "\n\nmajorLeague Display ";
cout << "\n age = " << age << " First name = " << First_name << " last = "
<< Last_name;
cout << "\n hr = " << hr << " rbi = " << rbi << " " << endl;
if (hr > 30)
cout << "\nmajor league success ";
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
