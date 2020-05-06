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
        int n;
        cin >> n;
        vector<long long int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        long long int res = s[0] ^ s[1];
        cout << res << endl;
        for (int i = 2; i < n; i++)
        {
            res = res ^ s[i];
        }
        cout << res;
        count++;
    }
    return 0;
}