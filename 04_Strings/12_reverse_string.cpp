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
    int i,j;
    j=name.size()-1;
    i=0;
    for(i,j ; i<=j ; i++,j-- ){
        swap(name[i],name[j]);
    }
    cout << name << endl;
    return 0;
}
