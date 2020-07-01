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
    if (s.top == -1)
    {
        cout << "No Elements";
    }
    else
    {
        for (int i = 0; i <= s.top; i++)
        {
            cout << s.stk[i] << " ";
        }
    }
    cout << endl;
}
// function for pushing element in stack
//time complexity ----> o(1)
void push(struct stack *s, int x)
{
    if (s->top == s->size - 1)
    {
        cout << "Stack Overflow"
             << "\n";
    }
    else
    {

        s->top++;
        s->stk[s->top] = x;
    }
}

// function for popping element from stack
string pop(struct stack *s)
{
    if (s->top == -1)
    {
        return "Stack Underflow";
    }
    else
    {
        int x = s->stk[s->top];
        s->top--;
        string ret = "Element " + to_string(x) + " Popped";
        return ret;
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
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);
    cout << "Stack Elements are : "<< "\n";
    Display(s);
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    return 0;
}

/*  *input*  
5
    *output*
Enter Stack Size: 
Enter Stack Size: 
Stack Elements are : 
1 2 3 4 5 
Element 5 Popped
Stack Elements are : 
1 2 3 4 
Element 4 Popped
Stack Elements are : 
1 2 3 
Element 3 Popped
Stack Elements are : 
1 2 
Element 2 Popped
Stack Elements are : 
1 
Element 1 Popped
Stack Elements are : 
No Elements
Stack Underflow
Stack Elements are : 
No Elements 
*/
