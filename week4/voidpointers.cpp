
/* char pointers & Functions
*/
#include <iostream>
using namespace std;
void voidPointer(void*, bool);
int main()
{
char a;
cout << "enter a letter ";
cin >> a;
int b;
cout << "\nEnter an integer";
cin >> b;
bool x = true;
cout << "\nBefore Function casting char a = " << a << "\tint b = " << b;
voidPointer(&a, x);
voidPointer(&b, false);
cout << "\nAfter Function casting char a = " << a << "\tint b = " << b;
cout << endl;
return 0;
}
void voidPointer(void* ptr, bool x)
{
if (x == true)
{
cout << "\nthe char value is " << *((char*)ptr);
*(char*)ptr = 'd';
}
if (x == false)
{
cout << "\nthe int value is " << *((int*)ptr);
*(int*)ptr = 30;
}
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
