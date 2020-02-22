/*
** @author : Ishank Singh
** link : https://www.codechef.com/problems/FCTRL2
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (count < t)
    {
        int n;
        cin >> n;
        int a[200];
        a[0] = 1;
        int m = 1;
        for (int i = 1; i <= n; i++)
        {
            int temp = 0;
            for (int j = 0; j < m; j++)
            {   
                int x = a[j] * i + temp;
                a[j] = x % 10;
             //   cout << "a[j]: " << a[j] << " ";
                temp = x / 10;
            }
            while (temp > 0)
            {
                a[m] = temp % 10;
                m = m + 1;
                temp = temp / 10;
            }
        }
        for (int i = m-1; i >= 0; i--) cout << a[i];

        cout << endl << m;
        count++;
    }
    return 0;
}