/*
 *   @author : Ishank Singh
 * 
 *   Problem : the problem is to find those numbers whose sum of the factorials of the digits are equal
 *   For ex : Input 
 *            145
 *            Output 
 *            Strong number as 145 => 1! + 4! + 5! => 1 + 24 + 120 => 145  
 */
#include <iostream>
#include <vector>

using namespace std;

long long int fact(int num)
{
    if (num == 0)
    {
        return 1;
    }

    long long int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num, sum = 0;
    cin >> num;
    int strong_num = num;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + fact(rem);
        num = num / 10;
    }

    if (sum == strong_num)
    {
        cout << "Strong number";
    }
    else
    {
        cout << "Not a strong number";
    }

    return 0;
}