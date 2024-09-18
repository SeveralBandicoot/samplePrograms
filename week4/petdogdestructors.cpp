
Page
1
of 2
// zWeek12_Polymorphism.cpp : This file contains the 'main' function. Program
execution begins and ends there.
// Objects use .operator but pointers this pointer
#include<iostream>
using namespace std;
class pet {
public:
pet()
{
cout << "\n\nbase pet constructor running ";
}
~pet()
{
cout << "\n\nbase pet desstructor running ";
}
virtual void print() {
cout << "\n\npet name = " << name;
}
string name;
};
class dog : public pet {
public:
dog()
{
cout << "\nderived dog constructor running ";
}
void print() {
cout << "\n\ndog name = " << name; // inherited
cout << "\nbreed = " << breed;
}
~dog()
{
cout << "\nderived dog destructor running ";
}
string breed;
};
int main() {
pet her;
dog his;
her.name = "baby";
//her.print();
his.name = "benji";
his.breed = "schnauzer";
// his.print();
cout << "\n";
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
