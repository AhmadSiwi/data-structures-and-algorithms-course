/*
Create a dynamic array of float numbers, the size of the array is determined by the user through
cin, each element in the array holds a value of 1/(index)! i.e a[i]=1.0/i!, run your program and
compute the sum of the array elements (which value the sum tends to ?)
The sum tends to 3
*/

#include <iostream>

using namespace std;

/* We can use this recursive function
   or we can use the iterative factorial as in the main function

float factorial(int f)
{
    if(f==0||f==1)
        return 1;
    return f*factorial(f-1);
}
*/

int main()
{
    int n, i;
    cin>>n;
    float *arr = new float[n];
    float sum =0, factorial=1;
    arr[0] = 1;
    sum += arr[0];
    for(i=1; i<n; i++)
    {
        factorial = factorial*i;
        arr[i] = 1/factorial;
        sum += arr[i];
    }
    cout<<sum<<" ";
    delete [] arr;
    return 0;
}
