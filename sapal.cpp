#include <iostream>

using namespace std;

#define MAX 10000
int main()
{
    int n;
    int Player1[MAX], Player2[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> Player1[i] >> Player2[i];
    }

    int W = 0, L = 0;
    for (int i = 0; i < n; i++)
    {
        if (Player1[i] >= Player2[i])
        {
            int diff = Player1[i] - Player2[i];
            if (diff > L)
            {
                L = diff;
                W = 1;
            }
        }
        else
        {
            int diff = Player2[i] - Player1[i];
            if (diff > L)
            {
                L = diff;
                W = 2;
            }
        }
    }

    cout << W << " " << L;
    return 0;
}
