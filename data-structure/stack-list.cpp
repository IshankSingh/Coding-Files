/*
** @author: Ishank
** Stack Implementation using list
*/

#include <iostream>

using namespace std;

struct node 
{
    int data;
    node * next;
};

class stack
{
private:
    node *top;

public:
    stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        if (top == NULL)
            return true;
        else
            return false;
    }

    void push(int item)
    {
        if (top == NULL)
        {
            node *temp = new node();
            temp->data = item;
            temp->next = NULL;
            top = temp;
        }
        else
        {
            node *temp = new node();
            temp->data = item;
            temp->next = top;
            top = temp;
        }
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "No item to pop in stack\n";
            return;
        }

        node *temp = top;
        top = top->next;
        delete temp;
    }

    int Top()
    {
        if (top == NULL)
        {
            cout << "No item to return in stack\n";
            return 0;
        }
        return top->data;
    }
};

int main()
{
    stack s;
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
            s.push(item);
            break;
        }
        case 2:
        {
            s.pop();
            break;
        }
        case 3:
        {
            if (s.isEmpty())
                cout << "true\n";
            else
                cout << "false\n";
            break;
        }
        case 4:
        {
            cout << s.Top() << endl;
            break;
        }
        }
    } while (ch != 5);

    return 0;
}