
#include <iostream>
// Function to calculate the area of different shapes
double calculateArea(int shape, double side1, double side2 = 0) {
// note the double that can recieve data or use it's default
switch (shape) {
case 0:
return 3.14 * side1 * side1; // Assuming side1 is the radius for circle
case 1:
return side1 * side1;
case 2:
return side1 * side2;
default:
std::cerr << "Unknown shape." << std::endl;
return -1; // Error indicator
}
}
int main() {
// Calculate and print the area of different shapes
std::cout << "\nenum = ShapeType ==> circle = 0 " << " and square = 1 " <<
std::endl;
std::cout << "Area of Circle with radius 5: " << calculateArea(0, 5) <<
std::endl;
std::cout << "Area of Square with side length 4: " << calculateArea(1, 4) <<
std::endl;
std::cout << "Area of Rectangle with sides 3 and 6: " << calculateArea(2, 3, 6)
<< std::endl;
return 0;
}
