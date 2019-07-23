/*
 *  @author : Ishank Singh
 *  This program implements from common algorithm of fibonacci to algorithm which will take less time to compute
 */

#include <iostream>
#include <vector>

using namespace std;

//This is a naive algorithm
long long int commonFibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    else
    {
        return commonFibonacci(n - 1) + commonFibonacci(n - 2);
    }
}

//This is a effecient algorithm

long long int efficientFibonacci(int num)
{
    vector<long long int> n(num);
    // n[0] = 0;
    // n[1] = 1;

    n.push_back(0);
    n.push_back(1);

    for (int i = 2; i < num; i++)
    {
        n.push_back(n[i - 1] + n[i - 2]);
        // n[i] = n[i - 1] + n[i - 2];
    }
    return n.back();
}

int main(void)
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    // cout << commonFibonacci(num);
    cout << efficientFibonacci(num);

    return 0;
}