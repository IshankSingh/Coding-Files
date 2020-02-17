/*
** @author : Ishank Singh
** problem : The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast 
** to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB 
** of input data per second at runtime.
** link : https://www.codechef.com/problems/INTEST
*/

// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, k;
    std::cin >> n >> k;
    int count = 0;
    while (n--)
    {
        int t;
        std::cin >> t;
        if (t % k == 0)
            count++;
    }
    std::cout << count;
    return 0;
}