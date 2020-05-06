/*
** @author : Ishank Singh
*/

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class queue
{
private:
    int count;
    node *head, *tail;

public:
    queue()
    {
        head = NULL;
        tail == NULL;
        count = 0;
    }

    void enqueue(int data)
    {
        node *temp = new node();
        temp->data = data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        count++;
    }

    void dequeue()
    {
        if (head == NULL)
        {
            cout << "No element to dequeue";
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
        count--;
    }

    int peeking()
    {
        if (head == NULL)
        {
            return 0;
        }
        return head->data;
    }

    bool isEmpty()
    {
        if (head == NULL)
            return true;

        return false;
    }

    int contains()
    {
        return count;
    }
};

int main()
{
    queue q;
    int ch;
    do
    {
        cout << "\n1. Enqueue operation\n2. Dequeue operation\n3. Check whether queue is empty or not\n4. Peek operation\n5. Contains\n6. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int item;
            cout << "Enter the item you want to enqueue\n";
            cin >> item;
            q.enqueue(item);
            break;
        }
        case 2:
        {
            q.dequeue();
            break;
        }
        case 3:
        {
            if (q.isEmpty())
                cout << "true\n";
            else
                cout << "false\n";
            break;
        }
        case 4:
        {
            cout << q.peeking() << endl;
            break;
        }
        case 5:
        {
            cout << q.contains() << endl;
            break;
        }
        }
    } while (ch != 6);

    return 0;
}