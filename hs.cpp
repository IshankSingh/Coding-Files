#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (count < t)
    {
        int n;
        cin >> n;
        vector<int> hs(0);
        hs.push_back(0);
        hs.push_back(0);
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 2 << endl;
        }
        else
        {

            for (int j = 2; j < n; j++)
            {
                int l = hs.size();
                int max = 0;
                int flag = 0;
                for (int i = 0; i < l - 1; i++)
                {
                    if (hs[l - 1] == hs[i])
                    {
                        max = i;
                        flag = 1;
                    }
                }
                if (flag)
                {
                    int c = l - 1 - max;
                    hs.push_back(c);
                }
                else
                {
                    hs.push_back(0);
                }
                flag = 0;
            }
            int res = 0;
            for (int a : hs)
            {
                if (a == hs[hs.size() - 1])
                {
                    res++;
                }
            }
            cout << res << endl;
        }

        count++;
    }
    return 0;
}