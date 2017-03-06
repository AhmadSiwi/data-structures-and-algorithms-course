/*
Write a program that recursively finds the maximum value of an array of integers.
*/

#include <iostream>

using namespace std;

int maxOfArray(int a[], int n)
{
    if(n==1)
        return a[0];
    int innerMax = maxOfArray(a, n-1);
    if(a[n-1]>=innerMax)
        return a[n-1];
    else
        return innerMax;
}

int main()
{
    int a[5] = {1, 6, 2, 4, 3};
    cout<<maxOfArray(a, 5)<<endl;
    return 0;
}
