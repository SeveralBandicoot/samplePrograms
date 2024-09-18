int binarySearch(const int arry[], int size, int value)
{
int first = 0, // First array element
last = size − 1, // Last array element
middle, // Midpoint of search
position = −1; // Position of search value
bool found = false; // Flag to indicate if the value was found
while (!found && first <= last)
{
middle = (first + last) / 2; // Calculate midpoint
if (arry[middle] == value) // If value is found there
{
found = true;
position = middle;
}
else if (arry[middle] > value) // If value is in lower half
last = middle − 1;
else
first = middle + 1; // If value is in upper half
}
return position;
