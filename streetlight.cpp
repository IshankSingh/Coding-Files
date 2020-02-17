/*
**   @author : Ishank Singh
**   problem : Street Lighting
**   statement : In a particular colony there are 8 streets. the lighting of the street is off if lighting on the  nighbour 
**
**
**
*/

#include <iostream>

#define log(x) std::cout << x << " ";
#define size 10
#define input(x) std::cin >> x;

int main()
{
    int n;
    input(n) int a[size];
    a[0] = 0;
    a[9] = 0;
    int count = 0;
    for (int i = 1; i < 9; i++)
    {
        input(a[i])
    }
    int b[8];
    while (count < n)
    {
        for (int i = 1; i < 9; i++)
        {
            if (a[i - 1] == a[i + 1])
                b[i - 1] = 0;
            else
                b[i - 1] = 1;
        }
        count++;
        for (int i = 0; i < 8; i++)
        {
            a[i + 1] = b[i];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        log(b[i])
    }
}