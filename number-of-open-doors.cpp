/*
 * @author : Ishank Singh
 * number-of-open-doors problem #Geeksforgeeks #TCS
 */

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

//This is naive method (not a best approach) as it solves the problem in pow((n-2),2) + n complexity.
int total_open_doors(int n)
{
    vector<unsigned int> num(n);
    num[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        num[i] = 1;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                if (num[i] == 0)
                {
                    num[i] = 1;
                }
                else
                {
                    num[i] = 0;
                }
            }
        }
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (num[i] == 1)
        {
            c++;
        }
    }
    return c;
}

int main(void)
{
    int n;
    cout << "Enter the total number of doors\n";
    cin >> n;

    cout << floor(sqrt(n)) << endl;
    cout << total_open_doors(n);
    return 0;
}