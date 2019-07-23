#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, num;
    cout << "Enter the number " << endl;
    cin >> num;

    std::vector<int> v;
    while (num > 0)
    {
        int i = num % 2;
        v.push_back(i);
        num = num / 2;
    }

    int count = 0, total = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i];
        if (v[i] == 1)
        {
            count++;
        }
        if (count > total)
        {
            total = count;
        }
        if (v[i] == 0)
        {
            count = 0;
        }
    }
    cout << "\nMaximum consecutive one's are " << total;
}
