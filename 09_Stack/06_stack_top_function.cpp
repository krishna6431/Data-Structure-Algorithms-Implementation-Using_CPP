//Data Structure Course
//All Codes Are Written by Krishna
//Stack

#include <iostream>
#include <string>
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
//function for peeking element from stack
string peek(struct stack s, int position)
{
    //position is from top
    if (s.top - position + 1 < 0)
    {
        return "Invalid Position";
    }
    else
    {
        int temp = s.stk[s.top - position + 1];
        string ret = "Element at: " + to_string(position) + " is: " + to_string(temp);
        return ret;
    }
}
//function for getting top element
string top(struct stack s)
{
    if (s.top == -1)
    {
        return "Empty Stack";
    }
    else
    {
        int temp = s.stk[s.top];
        return "Stack Top Element is : " + to_string(temp);
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
    Display(s);
    cout << top(s) << endl;
    cout << pop(&s) << endl;
    cout << "Stack Elements are : "
         << "\n";
    Display(s);
    cout << top(s) << endl;
    return 0;
}

/*  *input*  
5
    *output*
Enter Stack Size: 
1 2 3 4 5 
Stack Top Element is : 5
Element 5 Popped
Stack Elements are : 
1 2 3 4 
Stack Top Element is : 4
*/