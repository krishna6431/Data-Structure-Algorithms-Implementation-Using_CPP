//Data Structure Course
//All Codes Are Written by Krishna
//Stack

#include <iostream>
#define display(start, end) for (int i = start; i < end; i++)
#define fo(x, start, end) for (int x = start; x < end; i++)
#define Fo(x, start, end) for (int x = start; x <= end; i++)
using namespace std;

//Structure blue print of  stack data structure
struct stack
{
    int size;
    int top;
    int *stk;
};

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    struct stack s;
    cout << "Enter Stack Size: " << endl;
    cin >> s.size;
    s.stk = new int[s.size];
    s.top = -1;
    cout << "Stack Size : " << s.size << " Stack Top: " << s.top << "\n";
    return 0;
}

/*  *input*  
5
    *output*
Enter Stack Size: 
Stack Size : 5 Stack Top: -1 
*/   
