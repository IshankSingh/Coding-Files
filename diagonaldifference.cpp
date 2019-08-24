#include <iostream>
#include <vector>

using namespace std;

/*
 * @author : Ishank Singh
 * problem : Diagonal Difference (HackerRank, Easy)
 */

int diagonaldifference(vector<vector<int>> arr)
{
    int sum1 = 0, sum2 = 0, row = 0, col = 0;
    while (row < arr.size())
    {
        sum1 = sum1 + arr[row][col];
        row++;
        col++;
    }
    row = 0;
    col = arr[row].size() - 1;
    while (col > -1)
    {
        sum2 += arr[row][col];
        row++;
        col--;
    }
    int diff = sum1 - sum2;
    if (diff < 0)
    {
        diff = 0 - diff;
    }
    return diff;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> num(n);
    for (int i = 0; i < n; i++)
    {
        num[i] = vector<int>(n);
        for (int j = 0; j < n; j++)
        {
            cin >> num[i][j];
        }
    }

    cout << diagonaldifference(num);
}