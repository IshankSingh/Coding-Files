/*
 * @author : Ishank Singh
 * program : Caesar Cipher (Hackerrank, String, Easy)
 */
#include <iostream>
#include <string>

using namespace std;

string caesarCipher(string s, int k)
{
    string caesarstr = "";
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            int ch = ((int)c - 97 + k % 26) % 26;
            caesarstr = caesarstr + (char)(97 + ch);
        }
        else if (c >= 'A' && c <= 'Z')
        {
            int ch = ((int)c - 65 + k % 26) % 26;
            caesarstr = caesarstr + (char)(65 + ch);
        }
        else
        {
            caesarstr = caesarstr + c;
        }
    }
    return caesarstr;
}

int main()
{
    string str;
    getline(cin, str);

    int n;
    cin >> n;
    cout << caesarCipher(str, n);
}