/*
 *  @author  :  Ishank Singh
 *  This program find the LCM of the Two numbers.
 * 
 *  What is GCD or HCF?
 *  The Lowest Common Multiple (LCM) is the smallest number that two or more numbers will divide into evenly.
 *  
 *  For example -: LCM of 2, 4, 6, 8 is 24 as 24 is the smallest number to which all the terms can be devided with zero (0)
 *                 remainder.
 * 
 *  To find LCM(a, b) you first need to know how to find GCD.
 *
 *  Step 1: Find the GCD (Greatest Common Divisor ) of 12 and 9 which is 3.
 *
 *  Step 2: Multiply the numbers 12 and 9 together ( 12 * 9 = 108 )
 *
 *  Step 3: Divide the 108 with 3. (108/3 = 36)
 * 
 *  For GCD -:
 *  Eucleadean Algorithm -: Let a' be the remainder when a is divided by b, then gcd(a, b) = gcd(b, a') = gcd(a', b)
 *                          Proof : a = a' + bq
 *                          We can see that a is equal to a' + bq as a' is the remainder. Therefore, if d devides both a and b then it divides
 *                          a' + bq which means it divides both a' and b
 * 
 *  Eucleadean Algorithm has complexity of Big O(logn)
 */

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        int a_prime = a % b;
        return gcd(b, a_prime);
    }
}

int LCM(int a, int b)
{
    int gcd_number = gcd(a, b);
    int lcm = (a * b) / gcd_number;
    cout << lcm << endl;
    return lcm;
}

int main(void)
{
    int a, b;
    cout << "Enter the two numbers\n";
    cin >> a >> b;
    cout << "LCM of " << a << " and " << b << " is " << LCM(a, b) << endl;
}