//Data Structure Course
//All Codes Are Written by Krishna
//Strings
#include <iostream>
#include <string>
using namespace std;

string uppercase(string str)
{

    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 120)
        {
            str[i] -= 32;
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
    string res = uppercase(name);
    cout << res << endl;
}
