//Data Structure Course
//All Codes Are Written by Krishna
//Strings
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // chracter arrays
    char x[5];
    char x[5] = {'1', '2', '3', '4', '5'};
    char x[] = {'1', '2', '3', '4', '5', '6', '7'};
    // string contains '\0' as terminating string
    char x[10] = {'1', '2', '3', '4', '5', '\0'};
    char x[] = {'1', '2', '3', '4', '5', '6', '7', '\0'};
    // we can also declare a string variable  using below syntax
    char name[] = "krishna";
    // string declaration using pointers
    char *name = "krishna";
    // using standard library
    // need to include "string" header file and use string keyword
    string str;
    str = "krishna";
}
