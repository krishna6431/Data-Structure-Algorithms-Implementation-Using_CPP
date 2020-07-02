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
//linked list implementation
struct node
{
    int data;
    struct node *next;
};

//function for displaying stack element
void Display(struct node *top)
{
    if (top == NULL)
    {
        cout << "No Elements" <<"\n";
    }
    else
    {
        struct node *p = top;
        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << "\n";
    }
}
// push function for pusing elememnt into stack
struct node *push(struct node *top, int x)
{
    struct node *t = new (struct node);
    if (t == NULL)
    {
        cout << "Overflow Babu Bhaiya"
             << "\n";
        return top;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
        return top;
    }
}

// pop function for popping element from stack
struct node *pop(struct node *top){
     if(top==NULL){
         cout << "Stack is Empty\n";
         return top;
     }
     else{
         struct node *t = top;
         int x = top->data;
         cout << "Element popped: " + to_string(x)+ "\n";
         top=top->next;
         delete t;
         return top;
     }
}
int main()
{
    struct node *top = NULL; 
    top = push(top, 11);   
    top = push(top, 22);   
    top = push(top, 33);  
    top = push(top, 44);
    top = push(top,55);
    cout << "Stack ELement: "
         << "\n";
    Display(top);
    top=pop(top);
    cout << "Stack ELement: "
         << "\n";
    Display(top);
    top=pop(top);
    cout << "Stack ELement: "
         << "\n";
    Display(top);
}