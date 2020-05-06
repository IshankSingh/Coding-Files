#include <iostream>

using namespace std;

int MAXSIZE = 1000;
int last = -1;

void insert(int arr[], int val)
{
    arr[last + 1] = val;
    last++;
}

void insert(int arr[], int val, int pos)
{
    if (pos > last + 1)
    {
        cout << "Incorrect position";
    }
    else
    {
        last = last + 1;
        for (int i = last; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;
    }
}

void remove(int arr[], int val)
{
    if (arr[last] == val)
    {
    }
    else
    {
        int flag = 0;
        for (int i = 0; i <= last; i++)
        {
            if (arr[i] == val)
            {
                flag = i;
                break;
            }
        }
        for (int i = flag; i <= last - 1; i++)
        {
            arr[flag] = arr[i + 1];
        }
    }

    last--;
}

int main()
{

    int A[MAXSIZE];
    int s;
    do
    {
        cout << "\n1. Insert\n2. Remove\n3. Read\n4. Exit\n5. Insert with pos";
        cout << "\nEnter your choice: ";
        cin >> s;
        switch (s)
        {
        case 1:
        {
            int val;
            cout << "Enter the value you want to insert into the array";
            cin >> val;
            insert(A, val);
            break;
        }
        case 2:
        {
            int val;
            cout << "Enter the value you want to remove from the array";
            cin >> val;
            remove(A, val);
            break;
        }
        case 3:
        {
            for (int i = 0; i <= last; i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            int val, pos;
            cout << "Enter the value you want to insert into the array and the position at which you want to insert";
            cin >> val >> pos;
            insert(A, val, pos);
            break;
        }
        }
    } while (s != 4);
    return 0;
}