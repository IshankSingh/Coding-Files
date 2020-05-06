#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (count < t)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> x(0);
        for (int i = 0; i < n * k; i++)
        {
            x.push_back(a[i % n]);
        }

        int inv = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    inv++;
                }
            }
        }
        int tot = inv * k;
        int cnt = 0;
        for (int i = 0; i < n * k; i++)
        {
            for (int j = i + 1; j < n * k; j++)
            {
                if (x[i] > x[j])
                {
                    cnt++;
                }
            }
        }
        int mul = k * cnt * (k - 1);
        tot = tot + mul / 2;

        cout << cnt;
        cout << endl;
        count++;
    }
    return 0;
}