/*
Sort an array using bubble sort where you compare each two consecutive numbers and swap them
if they are not in an ascending order. You may run your operations in a number of paths equal to
the array size or if all array elements are in ascending order stop!
*/

#include <iostream>
#define sizeOfArray 5

using namespace std;

int main()
{
    int a[sizeOfArray] = {1, 5, 2, 4, 3};
    int i, j;
    int temp;
    for(i=0; i<sizeOfArray-1; i++)
    {
        for(j=0; j<sizeOfArray-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                // another method of swapping instead of using a third variable to swap through
                a[j]   = a[j]^a[j+1];
                a[j+1] = a[j]^a[j+1];
                a[j]   = a[j]^a[j+1];
            }
        }
    }
    for(i=0; i<sizeOfArray; i++)
        cout<<a[i]<<" ";
    return 0;
}
