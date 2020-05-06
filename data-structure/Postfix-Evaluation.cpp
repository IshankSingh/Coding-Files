/*
** @author : Ishank Singh
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isNumber(char c)
{
    if (c >= '0' && c <= '9') return true;
    return false;
}

bool isOperator(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-') return true;

    return false;
}
int calculate(char c, int a, int b)
{
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
    if (c == '+')
        return a + b;
    
    return a - b;
}

int postfixEvaluation (string str)
{
    stack<int> s;
    for (char i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == ',') continue;
        else if (isNumber(str[i]))
        {
            int num = 0;
            while (isNumber(str[i]) && i < str.length())
            {
                num = num * 10 + (str[i] - '0');
                i++;
            }
           // cout << "[num]: " << num <<endl;
            i--;
            s.push(num);
        }
        else if (isOperator(str[i]))
        {
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();

            int res = calculate(str[i], op1, op2);
            s.push(res);
        } 
    }
    return s.top();

}

int main()
{
    string s;
    getline(cin, s);
    cout << "result: " << postfixEvaluation(s);

    return 0;
}
