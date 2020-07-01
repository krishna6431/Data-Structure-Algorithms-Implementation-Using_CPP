//Data Structure Course
//All Codes Are Written by Krishna
//Strings
#include <iostream>
#include <string>
#define display(start,end) for(int i =start ; i < end ; i++)
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string s1, s2;
    getline(cin, s1);

    int arr[26] = {0};
    for (int i = 0; s1[i] != '\0'; i++)
    {
        int idx = s1[i] - 97;
        arr[idx]++;
    }

    // display(0,26) cout << arr[i] << " ";

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 1)
        {   char res = i+97;
            cout << res << " ";
        }
    }

    
    cout << endl;

    return 0;
}
