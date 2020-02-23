/*
** @author : Ishank Singh
** problem : check whether the parenthesis in expressions are balanced or not. It is a famous interview question which is asked by many companies
*/

#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

string checkParenthesis(char *c, int n)
{
    stack<char> s;
    for (char i = 0; i < n; i++)
    {
        if (c[i] == '{' || c[i] == '[' || c[i] == '(')
        {
            s.push(c[i]);
        }
        else if ((c[i] == '}' && s.top() == '{') || (c[i] == ']' && s.top() == '[') || (c[i] == ')' && s.top() == '('))
        {
            s.pop();
        }
        else continue;
    }

    if(s.empty()) return "balanced";
    else return "Not balanced";
}

int main()
{
    char c[20];
    gets(c);
    string s = checkParenthesis(c, strlen(c)); 
    cout << s;
}