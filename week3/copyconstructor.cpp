* Copy Constructor used to create a new object and copy an existing Objects data
*
* Copies must be of the same Class and use the Class name
*
* Copy Constructors should have a Destructor
*/
#include <iostream>
#include "p5_copyConstructor.h"
using namespace std;
int main()
{
p5_copyConstructor cp(33, "Capulet");
cp.display();
p5_copyConstructor cpy(cp);
cpy.display();
return 0;
}