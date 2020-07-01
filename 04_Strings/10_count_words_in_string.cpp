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
    int count;
    for(int i =0 ; name[i]!='\0'; i++){
        if(name[i]==' '){
            count++;
        }
    }
    cout << count +1 << endl;
    return 0;
}
