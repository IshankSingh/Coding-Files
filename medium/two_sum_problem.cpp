/*
 *  @author : Ishank Singh
 * 
 *  Problem : The challenge is to find all the pairs of two integers in an unsorted array that sum up to a given S. 
 *  Constraints : You have to solve the problem in O(n) complexity.
 * 
 *  For example : If the array is [3, 5, 2, -4, 8, 11] and the sum is 7, your program should return [[11, -4], [2, 5]] 
 *  because 11 + -4 = 7 and 2 + 5 = 7.
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, int> two_sum_pair(vector<int> arr, int sum)
{

    map<int, int> first, second;

    for (int i = 0; i < arr.size(); i++)
    {
        second[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < sum)
        {
            int rem = sum - arr[i];
            if (second[rem] > 0)
            {
                map<int, int>::iterator it;
                it = first.find(rem);
                if (it == first.end())
                {
                    first.insert(pair<int, int>(arr[i], rem)); // map.insert has complexity of logn and the complexity of loop is n;
                }                                              // overall complexity is O(nlogn)
            }
        }
    }

    for (auto x : second)
    {
        cout << x.first << ", " << x.second << "\n";
    }

    return first;
}

int main()
{
    int n, sum;
    cout << "Enter the value for total number of elements in array\n";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter sum\n";
    cin >> sum;

    map<int, int> two_pair_sum = two_sum_pair(arr, sum);
    map<int, int>::iterator itr;
    cout << "First begins\n";
    for (itr = two_pair_sum.begin(); itr != two_pair_sum.end(); ++itr)
    {
        cout << itr->first << ", " << itr->second << "\n";
    }
    return 0;
}
