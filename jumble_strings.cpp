/*
 *  @author : Ishank Singh
 * 
 *  Problem : If the string is given we have to first sort the string and then print the string from start and end simultaneously
 * 
 *  For ex : Input
 *           ishank
 * 
 *           Output
 *           ashnik 
 */

#include <iostream>
#include <string>

using namespace std;

char c[100] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

bool isVowel(char text)
{
    for (char x : c)
    {
        if (text == x)
        {
            return true;
        }
    }

    return false;
}
int main(void)
{
    string text;
    cout << "Enter the text\n";
    getline(cin, text);

    int v = 0, c = 0, w = 0;
    for (int i = 0; i < text.length(); i++)
    {
        isVowel(text[i]) ? v++ : text[i] == ' ' ? w++ : c++;
    }

    cout << "Total vowels are\n"
         << v << "\n"
         << "Total consonets are\n"
         << c << "\n"
         << "Total white spaces are\n"
         << w;
}