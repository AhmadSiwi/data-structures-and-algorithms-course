/*
Create a member function for stack to compare between two stacks, the function should takes one stack as
a parameter and compares it to the class stack it return either true or false.
*/
class stack {
private :
    int data[100];
    int top;
public:
    stack()
    {
        top = 0;
    }
    void push(int a)
    {
        data[top] = a;
        top++;
    }
    int pop()
    {
        int x = data[top];
        top--;
        return x;
    }
    bool isEmpty()
    {
        return top==0;
    }
    int peek()
    {
        return data[top];
    }
    bool isEqual(stack &s)
    {
        if(top != s.top)
            return false;
        for(int i=0; i<top; i++)
        {
            if(data[i] != s.data[i])
                return false;
        }
        return true;
    }
};
