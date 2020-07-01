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
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {11, 21, 33, 44, 55};
    create(arr, 5);
    cout << "original list" << endl;
    cout << "List : ";
    display(first);
    cout << "Deleting First Element" << endl;
    cout << delete_first(first) << endl;
    cout << "List : ";
    display(first);
    return 0;
}
