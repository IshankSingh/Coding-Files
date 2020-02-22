/*
** @author : Ishank Singh
** link : https://www.codechef.com/problems/FLOW007
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, reversenum = 0;
        cin >> num;
        while (num > 0)
        {
            reversenum = reversenum * 10 + num % 10;
            num = num / 10;
        }
        cout << reversenum << endl;
    }
    return 0;
}