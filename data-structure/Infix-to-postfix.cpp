/*
** @author: Ishank Singh
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int precedenceLevel(char c)
{
    if (c == '(' || c == '{' || c == '[') return 4;
    if (c == '^') return 3;
    if (c == '*' || c == '/' || c == '%') return 2;

    return 1;
}

bool isOperator(char c)
{
    if (c == '*' || c == '/' || c == '%' || c == '^' || c == '+' || c == '-') 
        return true;

    return false;
}
bool isAlpha(char c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        return true;
    return false;
}

bool hasParenthesis(char c)
{
    if (c == '{' || c == '[' || c == '(') 
        return true;

    return false;
}

char * infixPostfix(string str)
{
    stack<char> s;
    int n = str.length();
    char *c = new char[++n];
    int count = 0;
    for (char i = 0; i < str.length(); i++)
    {
        if (isAlpha(str[i]))
        {
            c[count] = str[i];
            count++;
        }
        else if (str[i] == ' ' || str[i] == ',') continue;
        else if (isOperator(str[i]) && (s.empty() || precedenceLevel(str[i]) > precedenceLevel(s.top())))
        {
            s.push(str[i]);
            //cout << s.top() << " "; 
        }
        else if (hasParenthesis(str[i]))
        {
            s.push(str[i]);
        }
        else if (isOperator(str[i]) && (precedenceLevel(str[i]) <= precedenceLevel(s.top())))
        {
            if (hasParenthesis(s.top()))
            {
                s.push(str[i]);
            }
            else
            {
                while (!s.empty() && (precedenceLevel(str[i]) <= precedenceLevel(s.top())))
                {
                    c[count] = s.top();
                    s.pop();
                    count++;
                }
                i--;
            }
            
        }
        else if (str[i] == '}' || str[i] == ']' || str[i] == ')')
        {
            while (!hasParenthesis(s.top()))
            {
                c[count] = s.top();
                s.pop();
                count++;
            }
            s.pop();
        }
    }
    while (!s.empty())
    {
        c[count] = s.top();
        s.pop();
        count++;
    }
    
    c[count] = '\0';
    return c;
}

int main()
{
    string s;
    getline(cin, s);

    char * c = infixPostfix(s);
    puts(c);
}