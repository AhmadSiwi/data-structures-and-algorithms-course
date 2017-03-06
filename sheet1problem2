#include <iostream>

using namespace std;

bool hasReapetedUnSorted(int a[], int n)
{
    bool repeated = false;
    int i, j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
                repeated = true;
        }
    }
    return repeated;
    // O(n*n)
}

bool hasReapetedSorted(int a[], int n)
{
    bool repeated = false;
    int i;
    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
            repeated = true;
    }
    return repeated;
    //O(n)
}

int main()
{
    int arr1[5] = {1, 6, 2, 4, 3}; // unreapeted unsorted
    int arr2[5] = {1, 6, 2, 6, 4}; //   reapeted unsorted
    int arr3[5] = {1, 2, 5, 6, 8}; // unreapeted   sorted
    int arr4[5] = {1, 2, 2, 4, 7}; //   reapeted   sorted
    cout<<hasReapetedUnSorted(arr1, 5)<<endl; // false
    cout<<hasReapetedUnSorted(arr2, 5)<<endl; // true
    cout<<hasReapetedSorted  (arr3, 5)<<endl; // false
    cout<<hasReapetedSorted  (arr4, 5)<<endl; // true
    return 0;
}
