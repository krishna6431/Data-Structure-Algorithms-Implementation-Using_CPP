//Data Structure Course
//All Codes Are Written by Krishna
//Strings
#include <iostream>
#include <string>
using namespace std;

int countVowels(string str)
{
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\0')
        {
            continue;
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    // excluding null character
    return i - count - 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string name;
    getline(cin, name);
    int res = countVowels(name);
    cout << res << endl;
}
