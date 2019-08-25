#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(void)
{
    string str;
    ostringstream strsum;
    getline(cin, str);

    int n = str.length();
    vector<char> num(0);

    for (char x : str)
    {
        if (x == ',')
        {
            continue;
        }
        else
        {
            num.push_back(x);
        }
    }
    int total = 0;
    string sum_tot = "";
    for (auto c : num)
    {
        total = total + c - '0';
    }
    for (int i = 0; i < num.size(); i++)
    {

        if (i == num.size() - 1)
        {
            int sum = total;
            sum = sum - (num[i] - '0');
            strsum << sum;
            sum_tot = strsum.str();
        }
        else
        {
            int sum = total;
            sum = sum - (num[i] - '0');
            strsum << sum;
            strsum << ",";
            sum_tot = strsum.str();
        }
    }
    cout << sum_tot;
}