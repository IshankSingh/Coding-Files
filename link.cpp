#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

node *insert(node *first, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->link = NULL;

    node *temp1 = first;
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        while (temp1->link != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = temp;
    }
    return first;
}

node *insertAnyPos(node *first, int val, int pos)
{
    node *temp = new node();
    temp->data = val;
    temp->link = NULL;

    node *temp1 = new node();
    temp1 = first;

    if (pos == 0)
    {
        temp->link = first;
        return temp;
    }
    else
    {
        int count = 1;
        while ((count < pos) && (temp1 != NULL))
        {
            temp1 = temp1->link;
            count++;
        }
        temp->link = temp1->link;
        temp1->link = temp;
        return first;
    }
}

void insertBeg(node **first, int val)
{
    node *temp = new node();
    temp->data = val;
    temp->link = *first;
    *first = temp;
}

void read(node *first)
{
    node *temp = first;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << "\n";
}

void recursivePrint(node *first) {
    if(first == NULL) {
        return;
    }
    cout << first->data <<" ";
    recursivePrint(first->link);
}

void recursiveReversePrint(node *first)
{
    if(first == NULL) {
        return;
    }
    recursiveReversePrint(first->link); 
    cout << first->data <<" ";  
}

void deleteNode(node **first, int pos)
{
    node *temp = *first;
    if (pos == 0) {
        *first = (**first).link;
        delete temp;
        return;
    }
    int count = 1;
    while ((count < pos) && (temp != NULL))
    {
        temp = temp->link;
        count++;
    }
    node *temp1 = new node();
    temp1 = temp->link;
    temp->link = temp1->link;
    delete (temp1);
}

node * reverseList(node *first) 
{
    node *prev, *current, *next;
    prev = NULL;
    current = first;
    while (current != NULL) 
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }   
    return prev;
}

int main()
{
    int count = 1;
    node *first;
    first = new node();
    first = NULL;

    int ch;
    do
    {
        cout << "\n1. Insert at the end\n2. Read\n3. Exit\n4. Insert at the beginning\n5. Insert at any position\n6. Delete\n7. Reverse the list\n8. Read list recursively\n9. Read list reversely using recursion\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int val;
            cout << "Enter the value you want to insert\n";
            cin >> val;
            first = insert(first, val);
            break;
        }
        case 2:
        {
            read(first);
            break;
        }
        case 3:
        {
            cout << "Exiting.....";
            break;
        }
        case 4:
        {
            int val;
            cout << "Enter the value you want to insert\n";
            cin >> val;
            insertBeg(&first, val);
            break;
        }
        case 5:
        {
            int val, pos;
            cout << "Enter the value you want to insert\n";
            cin >> val;
            cout << "Enter the position at which you want to insert\n";
            cin >> pos;
            first = insertAnyPos(first, val, pos);
            break;
        }
        case 6: 
        {
            int pos;
            cout << "Enter the position of the node you want to delete\n";
            cin >> pos;
            deleteNode(&first, pos);
            break;
        }
        case 7: 
        {
            first = reverseList(first);
            break;
        }
        case 8: 
        {
            recursivePrint(first);
            break;
        }
        case 9: 
        {
            recursiveReversePrint(first);
            break;
        }
        }
    } while (ch != 3);

    return 0;
}
