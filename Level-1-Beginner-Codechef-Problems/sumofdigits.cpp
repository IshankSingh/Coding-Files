/*
** @author : Ishank Singh
** link : https://www.codechef.com/problems/FLOW006
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (count < t)
    {
        int num;
        cin >> num;
        int sum = 0;
        while (num > 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
        cout << sum << endl;
        count++;
    }
}