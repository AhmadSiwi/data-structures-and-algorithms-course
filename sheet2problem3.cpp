/*
Modify the stack class by adding two member functions, first one to determine whether the stack is full or
not (in case of static array), second function is called peek to know the value at the top without affecting the
top pointer. (i.e. returning the top value without changing the value of the top variable.)
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
};
