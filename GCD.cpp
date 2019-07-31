/*
 *  @author  :  Ishank Singh
 *  This program find the GCD of the Two numbers.
 * 
 *  What is GCD or HCF?
 *  The Greatest Common Divisor (GCD), also known as the Greatest Common Factor (GCF), or Highest Common Factor (HCF), 
 *  of two or more non-zero integers, is the largest positive integer that divides the numbers without a remainder.
 *  
 *  For example -: GCD of 2, 4, 6, 8 is 2 as 2 is the only number for which all the terms can be devided with zero (0)
 *                 remainder.
 * 
 *  Eucleadean Algorithm -: Let a' be the remainder when a is divided by b, then gcd(a, b) = gcd(b, a') = gcd(a', b)
 *                          Proof : a = a' + bq
 *                          We can see that a is equal to a' + bq as a' is the remainder. Therefore, if d devides both a and b then it divides
 *                          a' + bq which means it divides both a' and b
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getGCD(int a, int b)
{
    int min = a < b ? a : b;
    int best = 0;
    for (int i = 2; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            best = i;
        }
    }

    return best;
}

int euclideanGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        int a_prime = a % b;
        return euclideanGCD(b, a_prime);
    }
}

int main(void)
{
    int a, b;
    cout << "Enter the two numbers for which you have to find the GCD\n";
    cin >> a >> b;
    // int gcd = getGCD(a, b);
    // cout << "The GCD of " << a << " and " << b << " is " << gcd;

    //Eucledean Algorithm
    int gcd = euclideanGCD(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << gcd;

    return 0;
}