//Data Structure Course
//All Codes Are Written by Krishna
//Strings
#include <iostream>
#include <string>
using namespace std;

string togglecase(string str)
{

    for (int i = 0; i < str[i] != '\0'; i++)

    {
        if (str[i] == '\0')
        {
            continue;
        }
        if (str[i] >= 'a' && str[i] <= 120)
        {
            str[i] -= 32;
        }
        else
        {
            str[i] += 32;
        }
    }

    return str;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string name;
    getline(cin, name);
    string res = togglecase(name);
    cout << res << endl;
}
