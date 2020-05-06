#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, q, m = 0;
    cin >> n >> q;
    int a[n][10000];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cin >> a[i][j];
            m = a[i][0];
        }
    }
    int b[q][2];
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < q; i++) {
        int p = b[i][0];
        int q = b[i][1];
        cout << a[p][q+1] << endl;
    }
}