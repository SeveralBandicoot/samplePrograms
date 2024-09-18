* W4 Boolean Grades
*/
#include<iostream>
#include<vector>
using namespace std;
struct clas{
vector<int> s;
int n;
void grade(int score) //
have students convert this method outside
{
if (score >= 90)
{
cout << "\n\n" << score << " is an A ";
}
if (score >= 80 && score <= 89)
{
cout << "\n\n" << score << " is a B ";
}
if (score >= 70 && score <= 79)
{
cout << "\n\n" << score << " is a C ";
}
if (score < 60) // # = F
cout << "\n\nYou Failed study more !!!";
}
void display();
void enterScore();
};
void clas::enterScore()
{
for (int i = 0; i <= 2; i++)
{
cout << "Enter a # :";
cin >> n;
s.push_back(n);
grade(n);
}
}
void clas::display()
{
for (int x : s)
{
cout << "\ns = " << x;
}
}
int main()
{
clas bob;
clas mary;
bob.enterScore();
bob.display();
mary.enterScore();
mary.display();
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