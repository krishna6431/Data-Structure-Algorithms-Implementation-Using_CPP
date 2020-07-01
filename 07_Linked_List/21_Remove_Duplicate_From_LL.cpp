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

//Function for removing duplicates from linked list
void remove_duplicates(struct node *p)
{
    struct node *fwd, *tail;
    fwd = p->next;
    tail = p;
    while (fwd)
    {
        if (fwd->data == tail->data)
        {
            tail->next = fwd->next;
            delete fwd;
            fwd = tail->next;
        }
        else
        {
            tail = fwd;
            fwd = fwd->next;
        }
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {11, 21, 33, 44, 44, 66, 77, 88, 88};
    create(arr, 9);
    cout << "Given List : ";
    display(first);
    cout << "Removing Duplicates......"<< "\n";
    remove_duplicates(first);
    cout << "List : ";
    display(first);
    return 0;
}
