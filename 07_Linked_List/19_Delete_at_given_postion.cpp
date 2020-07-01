//Data Structure Course
//All Codes Are Written by Krishna
//Linked-Lists
#include <bits/stdc++.h>
#define deb(start, end) for (int i = start; i < end; i++)
#define fo(x, start, end) for (int x = start; x < end; i++)
#define Fo(x, start, end) for (int x = start; x <= end; i++)
using namespace std;

//Structure blue print of node type
struct node
{
    int data;
    struct node *next;
} *first = NULL;

// function to create linked list having elements of an array
void create(int arr[], int n)
{
    int i;
    struct node *t, *last;
    first = new (struct node);
    first->data = arr[0];
    first->next = NULL;
    last = first;
    fo(i, 1, n)
    {
        t = new (struct node);
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// display function
void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
//Function for deleting node from linked list
// o(1) time compelxity
string delete_first(struct node *p)
{
    if (first == NULL)
    {
        return "Empty LL";
    }
    else
    {
        int x = first->data;
        struct node *p = first;
        first = first->next;
        delete p;
        string ret = to_string(x);
        return "ELement " + ret + " Deleted";
    }
}
//Delete at given postion
//o(n) time complexity
string delete_at(struct node *p, int postion)
{
    if (first == NULL)
    {
        return "Empty LL";
    }
    else
    {
        struct node *tail, *pp = p;
        for (int i = 1; i < postion; i++)
        {
            tail = pp;
            pp = pp->next;
        }
        int del = pp->data;
        tail->next = pp->next;
        delete pp;
        string ret = to_string(del);
        string pos1 = to_string(postion);
        return "Element at position " + pos1 + "th = " + ret + " is deleted";
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {11, 21, 33, 44, 55, 66 , 77 , 88 , 99};
    create(arr, 9);
    cout << "original list" << endl;
    cout << "List : ";
    display(first);
    cout << "Deleting First Element" << endl;
    cout << delete_first(first) << endl;
    cout << "List : ";
    display(first);
    cout << "Deleting Fifth Element" << endl;
    cout << delete_at(first,5) << endl;
    cout << "List : ";
    display(first);
    return 0;
}
