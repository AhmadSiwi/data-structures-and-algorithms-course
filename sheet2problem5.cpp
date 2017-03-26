/*
Create an algorithm based on the stack to remove repeated items from a given sorted array.
*/

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int arr[7] = {1, 5, 5, 7, 12, 44, 50};
    stack<int> s;
    s.push(arr[0]);
    for(int i=1; i<7; i++)
    {
        if(arr[i] != s.top())
            s.push(arr[i]);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
