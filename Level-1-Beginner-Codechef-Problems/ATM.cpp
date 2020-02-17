/*
** @author : Ishank Singh
** Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
** and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful 
** withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.
**
** Input:
** 30 120.00
**
** Output:
** 89.50
** link : https://www.codechef.com/problems/HS08TEST
*/

#include <iostream>
#include <iomanip>

#define log(x) std::cout << x;
int main()
{
    int x;
    float y;
    std::cin >> x >> y;

    if (x % 5 == 0 && x <= y - 0.50f)
    {
        y = y - (float)x - 0.50f;
    }
    std::cout << std::fixed << std::setprecision(2) << y;

    return 0;
}