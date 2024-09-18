
#include <iostream>
using namespace std;
void x(std::string, int y = 7);
int main() {
cout << "\nusing a maybe parameter";
x("without an Integer");
x("with an int", 8);
return 0;
}
void x(std::string p, int y) {
cout << "\n\tstring p = " << p << "\n\t and int y = " << y << endl;
}
