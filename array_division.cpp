/*
 *  @author : Ishank Singh
 * 
 *  Problem : If a array of n elements is given then you have to split the array into two arrays such that both the arrays have same sum.
 *            if they have same sum then print YES else NO.
 * 
 *  for ex : Input
 *           n = 3
 *           1 3 2
 * 
 *           Output
 *           Yes
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(void)
{
    int n, sum = 0;
    cin >> n;
    vector<int> A(n, 0);

    for (int i = 0; i < n; i++)
        cin >> A[i], sum += A[i];

    cout << "sum is " << sum << endl;
    if (sum & 1)
        cout << "No";

    unordered_map<int, int> first, second;

    first[A[0]] = 1;

    for (int i = 1; i < n; i++)
        second[A[i]]++;

    int s_dash = 0;
    for (int i = 0; i < n; i++)
    {
        s_dash += A[i];
        if (s_dash == sum / 2)
        {
            cout << "Yes";
            return 0;
        }
        if (s_dash < sum / 2)
        {
            int x = sum / 2 - s_dash;
            if (second[x] > 0)
            {
                cout << "Yes\n";
                return 0;
            }
        }
        if (s_dash > sum / 2)
        {
            int y = s_dash - sum / 2;
            if (first[n])
            {
                cout << "Yes\n";
                return 0;
            }
        }
        first[A[i + 1]]++;
        second[A[i + 1]]--;
    }

    cout << "No";

    return 0;
}