
Page
1
of 2
/* creating a Dynamic (on the fly) Array
* using Pointers and the new command
*/
#include <iostream>
using namespace std;
int main()
{
int size = 5;
int* intArray = new int[size]; // new is declaring the
Dynamic Array delete it
for (int i = 0; i < size; i++)
{
intArray[i] = i;
cout << "\n" << intArray[i];
}
cout << "\n\n";
for (int i = 0; i < size; i++)
{
intArray[i] *= 3;
}
for (int i = 0; i < size; i++)
cout << "\n" << intArray[i];
delete[]intArray; // Dynamic
memory should be deleted by the Owner
intArray = nullptr; // Dynamic
pointers should be negated
cout << endl;
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
// 6. In the future, to open this project again, go to File > Open > Project
and select the .sln file
