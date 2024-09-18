void selectionSort(vector<string> &v)
{
int minIndex;
string minValue;
string temp;

for (int start = 0; start < (siz - 1); start++) {
minIndex = start;
minValue = v[start];

for (int index = start + 1; index < siz-1; index++) {
if (v[index] < minValue) {
minValue = v[index];
minIndex = index;
}
}
temp = v[minIndex];
v[minIndex] = v[start];
v[start] = temp;
//swap(arry[minIndex], arry[start]);
}
}
