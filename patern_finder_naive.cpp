/*
 *  @author : Ishank Singh
 * 
 *  Problem : In this we will try to find the patter between the two strings using brute force approach or naive algorithm.
 *            Complexity O(|text| * |Pattern|)
 * 
 *  Algorithm : 1. input text string.
 *              2. input pattern string.
 *              3. set i, j and count = 1.
 *              4. while if text[i] == pattern[j] increement both i, j and count by 1.
 *              5. else increement i by 1.
 *              6. if count == pattern.length() print "match found"
 *              7. else print "match not found".
 */

#include <iostream>
#include <string>

using namespace std;

void find_pattern(string text, string pattern)
{
    int i = 0, j = 0, count = 0;
    while (i < text.length())
    {
        if (pattern[j] == text[i])
        {
            i++;
            j++;
            count++;
            if (count == pattern.length())
            {
                cout << "Match found";
                return;
            }
        }
        else
        {
            if (count == pattern.length())
            {
                cout << "Match found";
                return;
            }
            i++;
        }
        if (i == text.length() && count != pattern.length())
        {
            cout << "Match not found";
            return;
        }
    }
}

int main(void)
{
    string text, pattern;
    cout << "Enter the text\n";
    cin >> text;

    cout << "Enter the pattern\n";
    cin >> pattern;

    find_pattern(text, pattern);
    return 0;
}