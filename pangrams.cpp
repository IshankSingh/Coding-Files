/*
 * @author : IShank Singh
 * Program : Pangrams (Hackerrank, String, Easy)
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string pangrams(string s)
{
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && str[i] <= 'z')
        {
            str = str + s[i];
        }
        if (s[i] == ' ')
            continue;
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            str = str + (char)(s[i] + 32);
        }
    }
    s = str;
    int flag = 0;
    vector<char> dist(0);
    dist.push_back(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        for (char c : dist)
        {
            if (c == s[i])
            {
                flag = 1;
            }
        }
        if (flag == 0)
            dist.push_back(s[i]);
        flag = 0;
    }

    if (dist.size() == 26)
        return "pangram";
    else
        return "not pangram";
}

int main()
{
    string s;
    getline(cin, s);
    cout << pangrams(s);
}