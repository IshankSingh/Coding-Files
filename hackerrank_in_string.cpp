/*
 * @author : Ishank Singh
 * Problem : HackerRank in a string (HackerRank, String, Easy)
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string hackerrankInString(string s)
{
    string str = "hackerrank";
    int count = 0;
    for (char c : s)
    {
        if (c == str[count])
        {
            count++;
        }
        if (count == str.length())
            break;
    }
    if (count == str.length())
        return "YES";
    else
        return "NO";
}

int main(void)
{
    string s;
    getline(cin, s);
    cout << hackerrankInString(s);
}