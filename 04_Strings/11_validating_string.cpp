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
    string name;
    getline(cin, name);
    int flag = true;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] >= 65 and name[i] <= 90) or (name[i] >= 97 and name[i] <= 120) or (name[i] >= 48 and name[i] <= 57) and !(name[i] >= 33 and name[i] <= 47))
        {
            continue;
        }
        else
        {
            flag = false;
        }
    }
    if (flag)
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;
    return 0;
}
