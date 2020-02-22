#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (count < t)
    {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
        count++;
    }
    return 0;
}