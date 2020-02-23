/*
** @author: Ishank
** Stack Implementation using array
*/

#include <iostream>
using namespace std;

#define max 100

bool isEmpty(int top)
{
    if (top == -1)
        return true;
    else
        return false;
}

void push(int stack[], int &top, int item)
{
    if (top == max - 1)
    {
        cout << "stack overflow can't enter more items\n";
        return;
    }
    top = top + 1;
    stack[top] = item;
}

void pop(int stack[], int &top)
{
    if (isEmpty(top))
    {
        cout << "No items in stack to return\n";
        return;
    }
    top = top - 1;
}

int Top(int stack[], int top)
{
    if(isEmpty(top))
    {
        cout << "No items in stack to return\n";
        return;
    }
    return stack[top];
}


int main() 
{
    int stack[max];
    int top = -1;
    int ch;
    do
    {
        cout << "\n1. Push operation\n2. Pop operation\n3. Check whether stack is empty or not\n4. Get top of the stack\n5. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int item;
            cout << "Enter the item you want to push\n";
            cin >> item;
            push(stack, top, item);
            break;
        }
        case 2:
        {
            pop(stack, top);
            break;
        }
        case 3:
        {
            if (isEmpty(top))
                cout << "true";
            else
                cout << "false";
            break;
        }
        case 4:
        {
            cout << Top(stack, top);
            break;
        }
        }
    } while (ch != 5);

    return 0;
}