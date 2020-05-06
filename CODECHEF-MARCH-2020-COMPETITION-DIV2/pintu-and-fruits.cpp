/*
** @AUTHOR : ISHANK SINGH
** LINK : https://www.codechef.com/MARCH20B/problems/CHPINTU
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int *f = new int[n];
        int *p = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int purch = 0;
        float min_cost = 9999.99;
        for (int i = 1; i <= m; i++)
        {
            int sum = 0, count = 0;
            float tot_cost = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == f[j])
                {
                    count++;
                    sum = sum + p[j];
                }
            }
            
            if (count == 0) continue;

            tot_cost = sum / count;
            if (min_cost > tot_cost)
            {
                min_cost = tot_cost;
                purch = sum;
            }
        }

        cout << purch << endl;
    }
}