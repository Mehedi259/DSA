#include <iostream>
using namespace std;
int top = -1, stack[10], n = 10;
void push(int val)
{

    if (top >= n - 1)
    {
        cout << "Stack Overflow";
    }
    else
    {
        top++;
        stack[top] = val;
    }
}
void pop()

{
    if (top <= -1)
    {
        cout << "Stack Underflow";
    }
    else
    {
        cout << "the popped element is " << stack[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are :";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " " << endl;
        }
    }
    else
    {
        cout << "stack is empty";
    }
}
int main()
{
    int ch, val;
    cout << "1) PUsh in stack" << endl;
    cout << "2) Pop in stack" << endl;
    cout << "3) Display in stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter your choise " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the value to be pushed " << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit" << endl;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);
    return 0;
}
