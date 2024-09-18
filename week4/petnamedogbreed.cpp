
Page
1
of 2
// zWeek12_Polymorphism.cpp : This file contains the 'main' function. Program
execution begins and ends there.
//
#include<iostream>
using namespace std;
class pet {
public:
virtual void print() {
cout << "name = " << name;
}
string name;
};
class dog : public pet {
public:
void print() {
cout << "\n\nname = " << name;
cout << "\nbreed = " << breed;
}
string breed;
};
class beagle : public dog {
public:
int age;
void print() {
cout << "\n\nname = " << name;
cout << "\nbreed = " << breed;
cout << "\nage = " << age;
}
};
int main() {
dog ddog;
pet bpet;
ddog.name = "fifi";
ddog.breed = "poodle";
ddog.print();
bpet = ddog; // might be
allowed but cannot use breed
cout << "\n bpet.name = " << bpet.name;
// cout << "\n bpet.breed = " << bpet.breed; // illegal assignment
bpet.print();
beagle beag;
beag = ddog;
beag.print();
return 0;
}
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
