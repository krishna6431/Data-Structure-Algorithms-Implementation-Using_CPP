//Data Structure Course
//All Codes Are Written by Krishna
//Strings
#include <iostream>
#include <string>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int i, j;
    for (i = 0, j = 0; s1[i] != '\0' && s2[i] != '\0'; i++, j++)
    {
        if (s1[i] != s2[i])
        {
            cout << abs(s1[i] - s2[i]) << endl;
            return 0;
        }
    }
    cout << "Equal" << endl;

    return 0;
}
