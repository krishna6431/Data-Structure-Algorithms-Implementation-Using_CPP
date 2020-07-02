//Code is Written By Krishna
#include<iostream>
#include<string>
using namespace std;
//Structure blue print of  stack data structure
struct stack
{
    int size;
    int top;
    int *stk;
    char *stk1;
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
// function for pushing element in stack
//time complexity ----> o(1)
void push_c(struct stack *s, char x)
{
    if (s->top == s->size - 1)
    {
        cout << "Stack Overflow"
             << "\n";
    }
    else
    {

        s->top++;
        s->stk1[s->top] = x;
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
// function for popping element from stack
char pop_c(struct stack *s)
{
    if (s->top == -1)
    {
        return '!';
    }
    else
    {
        char x = s->stk1[s->top];
        s->top--;
        return x;
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

//function for getting top element
char top_c(struct stack s)
{
    if (s.top == -1)
    {
        return '!';
    }
    else
    {
        char temp = s.stk1[s.top];
        return temp;
    }
}
//function for check is stack is empty or not
bool is_Empty(struct stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//function for checking is stack is full or not
bool is_Full(struct stack s)
{
    if (s.top == s.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
