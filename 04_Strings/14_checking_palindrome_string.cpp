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
    int i, j;
    j = s1.size() - 1;
    for (i = 0, j; i <= j; i++, j--)
    {
        if (s1[i] == s1[j])
        {
            continue;
        }
        else
        {
            cout << "Not Palindrome" << endl;
            return 0;
        }
    }

    cout << "Palindrome String " << endl;

    return 0;
}
