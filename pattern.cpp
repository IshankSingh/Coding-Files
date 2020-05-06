#include <iostream>

using namespace std;

int main()
{

    int count = 1, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << count - n + j << " ";
        }
        count = count - n + i;
        cout << endl;
    }
}