
// zWeek12_Polymorphism.cpp : This file contains the 'main' function. Program
execution begins and ends there.
// Objects use .operator but pointers this pointer
#include<iostream>
using namespace std;
class pet {
public:
virtual void print() {
cout << "pet name = " << name;
}
string name;
};
class dog : public pet {
public:
void print() {
cout << "dog name = " << name; // inherited
cout << "\nbreed = " << breed;
}
string breed;
};
int main() {
dog* ddog;
ddog = new dog(); //
create a dynamic variable
ddog->name = "fifi"; // note the
pointer using this ->
ddog->breed = "poodle";
cout << "\n\n ddog attributes = ";
ddog->print();
pet* bpet = new pet();
bpet = ddog;
ddog = bpet;
//bpet->name = "spike"; // note how Call-By-
References sticks the pointer
cout << "\n bpet attributes = ";
bpet->print(); // use of pointers
allows base to use derived attributes
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
