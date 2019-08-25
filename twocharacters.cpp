/*
 *  @author : Ishank Singh
 *  problem : Two Characters (HackerRank)
 *  In this challenge, you will be given a string. You must remove characters until the string is made up of any two alternating characters. 
 *  When you choose a character to remove, all instances of that character must be removed. Your goal is to create the longest string possible 
 *  that contains just two alternating letters.
 * 
 *  As an example, consider the string abaacdabd. If you delete the character a, you will be left with the string bcdbd. Now, removing the 
 *  character c leaves you with a valid string bdbd having a length of 4. Removing either b or d at any point would not result in a valid string.
 * 
 *  Given a string , convert it to the longest possible string  made up only of alternating characters. Print the length of string  on a new line.
 *  If no string  can be formed, print 0 instead.
 * 
 *  ex : Input
 *       10
 *       beabeefeab
 *       output :  5
 * 
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkConsecutiveString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1] && i != s.length() - 1)
            return true;
    }
    return false;
}

int alternate(string s)
{
    int tot = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'b'; j <= 'z'; j++)
        {
            if (s.find(i) == string::npos)
                continue;
            if (s.find(j) == string::npos)
                continue;

            string x;
            for (auto ch : s)
            {
                if (ch == i || ch == j)
                {
                    x.push_back(ch);
                }
            }
            if (!checkConsecutiveString(x))
            {
                tot = max(tot, (int)x.size());
            }
        }
    }

    return tot;
}

int main()
{
    string s;
    getline(cin, s);
    cout << alternate(s);
}
