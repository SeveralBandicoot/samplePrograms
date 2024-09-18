/* Copy Constructor used to create a new object and copy an existing Objects data
*
* Copies must be of the same Class and use the Class name
*
* Copy Constructors should have a Destructor
*/
#ifndef copyConstructor_H
#define copyConstructor_H // old style
"inclusion guards"
#include<string>
#include<iostream>
class p5_copyConstructor
{
public:
int age{};
std::string name;
//int* ptr;
p5_copyConstructor(int ag, std::string nme) // regular Constructor
to create Objects with age and name
{
age = ag;
name = nme;
}
p5_copyConstructor(const p5_copyConstructor& input) // Copy constructor with
const & Call-by-Ref
{ // -->
Note that copyConstructor uses the same name as the Class
age = input.age; // --> Note Object
dot operator
name = input.name;
//ptr = input.ptr;
}
~p5_copyConstructor() //
Destructor to free up memory that was used during the copy process
{
}
void display();
};
#endif;