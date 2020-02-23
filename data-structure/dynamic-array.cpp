/*
** @author : Ishank Singh
** This is the program showing the basic implementation of dynamic array
*/

#include <iostream>
using namespace std;

int * insert(int *arr, int &n, int &inisize, int data)
{
    if (n == inisize)
    {
        int *b = new int[2 * n];
        n = n * 2;
        for (int i = 0; i < inisize; i++)
        {
            b[i] = arr[i];
        }
        b[inisize] = data;
        inisize = inisize + 1;
        delete [] arr;
        return b;
    }
    else
    {
        arr[inisize] = data;
        inisize++;
        return arr;
    }
}

void print(int * arr, int inisize)
{
    for (int i = 0; i < inisize; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int n = 3;
    int count = 0;
    int *a = new int[n];
    int ch;
    do
    {
        cout << "\n1. Insert\n2. Read\n3. Exit\n";
        cin >> ch;
        if (ch == 1)
        {
            int data;
            cout << "Enter the item you want to insert: ";
            cin >> data;
            a = insert(a, n, count, data);
        }
        if (ch == 2)
        {
            print(a, count);
        }
    } while (ch != 3);   
    
    return 0;

}