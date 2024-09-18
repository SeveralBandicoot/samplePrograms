class student
{
public:
string name;
int id;
double gpa;
};
int main()
{
student class1[3];
student s;
s.name = "Bob";
s.id = 12345;
s.gpa = 2.2;
class1[0] = s;
s.name = "Mary";
s.id = 54321;
s.gpa = 3.3;
class1[1] = s;
s.name = "Bill";
s.id = 67890;
s.gpa = 4.4;
class1[2] = s;


int len = size(class1);
cout << "\n\n size = " << len;
string nam;
int ids;
double gpas;
cout << "\nEnter the name to search ";
cin >> nam;
for (int i = 0; i < size(class1); i++)
{
if (nam == class1[i].name)
{
cout << "\n\t " << nam << " found at index " << i;
}
}
cout << "\nEnter id # ";
cin >> ids;
for (int i = 0; i < size(class1); i++)
{
if (ids == class1[i].id)
{
cout << "\n\t " << ids << " found at index " << i;
}
}
return 0;
}