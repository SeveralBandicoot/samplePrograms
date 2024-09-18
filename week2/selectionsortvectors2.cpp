void selectionSort(vector<string> &);
vector<string> a{"Whats", "in", "a", "Name"};
int siz = 4;
int main()
{
bool madeSwap = true;
int i, j, y, tmp = 0;
int x = end(a) - begin(a);
cout << "original array x = " << x << endl;
for (y = 0; y < x; y++)
{
cout << "\na[" << y << "] = " << a[y];
}
selectionSort(a);
cout << "\n\nsorted array = ";
for (i = 0; i < x; i++)
cout << "\na[" << i << "] = " << a[i];
return 0;
}