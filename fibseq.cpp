#include <iostream>
#include <vector>
using namespace std;

void elimination(vector<int> arr, int n)
{
    if (n == 1)
    {
        int num = arr[0];
        cout << num << endl;
        return;
    }
    vector<int> a(0);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            a.push_back(arr[i]);
    }
    elimination(a, a.size());
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(0);
        arr.push_back(0);
        arr.push_back(1);
        for (int i = 2; i < n; i++)
        {
            int num = arr[i - 1] + arr[i - 2];
            arr.push_back(num % 10);
        }
        elimination(arr, arr.size());
    }
    
    return 0;
}