//Data Structure Course
//All Codes Are Written by Krishna
//Circular Linked L:st
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
};

// function to create linked list having elements of an array
struct node *create(int arr[], int n)
{
    int i;
    struct node *first, *t, *last;
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
    last->next = first;
    return first;
}
// display function
void display(struct node *p)
{
    struct node *head = p;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}
//recursive display function

void r_display(struct node *p, struct node *head)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        r_display(p->next, head);
    }
    flag = 0;
}
//insert at begining
struct node *insert_beg(struct node *p, int x)
{
    struct node *head = p;
    struct node *t = new (struct node);
    t->data = x;
    t->next = p;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = t;
    p = t;
    return p;
}
// inserting node at any given position
struct node *insert(struct node *p, int position, int x)
{
    struct node *head = p;

    if (position == 1)
    {
        if (p == NULL)
        {
            struct node *t = new (struct node);
            p = t;
            t->data = x;
            t->next = p;
            return p;
        }

        else
        {
            struct node *t = new (struct node);
            t->data = x;
            t->next = p;
            while (p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            p = t;
            return p;
        }
    }
    else
    {   
        p=head;
        struct node *t = new (struct node);
        t->data = x;
        for (int i = 1; i < position - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        return head;
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {11, 21, 33, 44, 44};
    struct node *first = create(arr, 5);
    cout << " Circular Linked List : ";
    r_display(first, first);
    cout << "\n";
    first = insert(first, 1, 9);
    cout << "Modi CLL: ";
    r_display(first, first);
    cout << "\n";
    first = insert(first,7, 5);
    cout << "Modi CLL: ";
    r_display(first, first);
    cout << "\n";
    first = insert(first,3, 7);
    cout << "Modi CLL: ";
    r_display(first, first);
    cout << "\n";
    return 0;
}
