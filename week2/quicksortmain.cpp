//QuickSort main( )
#include <iostream>
#include <algorithm> //needed for swap function
using namespace std;
// Function prototypes
void quickSort(int[], int, int);
int partition(int[], int, int);
int main()
{
// Array to be sorted
const int SIZE = 10;
int array[SIZE] = { 17, 53, 9, 2, 30, 1, 82, 64, 26, 5 };
// Echo the array to be sorted
for (int k = 0; k < SIZE; k++)
cout << array[k] << " ";
cout << endl;
// Sort the array using Quicksort
quickSort(array, 0, SIZE−1);
// Print the sorted array
for (int k = 0; k < SIZE; k++)
cout << array[k] << " ";
cout << endl;
return 0;
