#include <iostream>

using namespace std;
#define MAX 10000
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int totsteps = 1;
    int m = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= n - 1)
        {
            cout << totsteps;
            return 0;
        }
        int count = 1, max = 0;
        int jump = 0;

        while (count <= a[i])
        {
            if (count + a[i + count] >= m - 1)
            {
                cout << ++totsteps;
                return 0;
            }
            if (max <= count + a[i + count])
            {
                max = count + a[i + count];
                jump = count;
                
            }
            count++;
        }
        i = i + jump;
        m = m - i;
        totsteps++;
    }
    return 0;
}