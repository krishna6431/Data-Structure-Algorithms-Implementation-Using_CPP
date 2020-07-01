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

// function for displaying stack;
void Display(struct stack s)
{
    for (int i = 0; i < s.size; i++)
    {
        cout << s.stk[i] << " ";
    }
    cout << endl;
}

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
    for (int i = 0; i < s.size; i++)
    {
        cin >> s.stk[i];
    }
    Display(s);
    return 0;
}

/*  *input*  
5
1 2 3 4 5
    *output*
Enter Stack Size: 
1 2 3 4 5
*/
