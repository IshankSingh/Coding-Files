/*
** @author : Ishank Singh
** link : https://www.codechef.com/problems/FLOW004
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int last = n % 10;
        int first = 0;
        while (n > 0)
        {
            first = n % 10;
            n = n / 10;
        }
        cout << last + first << endl;
    }
    return 0;
}