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
    for (int i = 0; i <= s.top; i++)
    {
        cout << s.stk[i] << " ";
    }
    cout << endl;
}
// function for pushing element in stack
//time complexity ----> o(1)
void push(struct stack *s, int x)
{
    if (s->top == s->size - 1)
    {
        cout << "Stack Overflow" << "\n";
    }
    else
    {

        s->top++;
        s->stk[s->top] = x;
    }
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
    push(&s, 1);
    Display(s);
    push(&s, 2);
    Display(s);
    push(&s, 3);
    Display(s);
    push(&s, 4);
    Display(s);
    push(&s, 5);
    Display(s);
    push(&s, 6);
    Display(s);
    return 0;
}

/*  *input*  
5
    *output*
Enter Stack Size: 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
Stack Overflow
1 2 3 4 5  
*/
