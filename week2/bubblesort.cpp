void bubble(int [], int); // no names are given in prototype
int main()
{
int i=4, a[10] = {3,1,6,2}; // create a function to loop & print original array
bubble( a, i-1); // only the array name is used inside the call
for(i=0;i<=3;i++) // for(int x: a)
cout<<“\na[“<<i<<“] = “<<a[i];
return 0;
}
void bubble(int x[], int y) // empty array set fills automatically
{
    int i, j, tmp=0;
    for( j=1; j<=y; j++ ){
        for( i=0; i<y; i++ ){
            if( x[i] < x[i+1] ){
                tmp = x[i];
                x[i] = x[i+1];
                x[i+1] = tmp;
            }
        }
    }
