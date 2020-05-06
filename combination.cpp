#include <iostream>
#include <vector>

using namespace std;

//start = starting index of arr
//end = last index of arr
//index = current index of data
void combinationMaker(vector<int> arr, vector<int> data, int start, int end, int index, int cycle)
{
    if (index == cycle)
    {
        for (int j = 0; j < cycle; j++)
            cout << data[j] << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= cycle - index; i++)
    {
        data[index] = arr[i];
        combinationMaker(arr, data, i + 1,
                         end, index + 1, cycle);
    }
}

void possible_comb(vector<int> arr, int cycle)
{
    vector<int> data(cycle);
    combinationMaker(arr, data, 0, arr.size() - 1, 0, cycle);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n;
    cin >> n;

    possible_comb(arr, n);
}