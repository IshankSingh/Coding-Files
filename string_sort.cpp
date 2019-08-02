#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{

    string str;
    cout << "Enter the text\n";
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}