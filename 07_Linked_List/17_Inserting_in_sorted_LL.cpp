//Data Structure Course
//All Codes Are Written by Krishna
//Linked-Lists
#include <iostream>
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

//function for inserting node in LL
//Inserting Before First Node
// o(1) time
void insert_begin(struct node *p, int data)
{
    struct node *t;
    t = new (struct node);
    t->data = data;
    t->next = first;
    first = t;
}
//function for inserting node at given position
//o(n) time complexity

void insert_at(struct node *p, int position, int data)
{
    struct node *t;
    struct node *tail = p;
    for (int i = 1; i < position - 1; i++)
    {
        p = p->next;
    }
    t = new (struct node);
    t->data = data;
    t->next = p->next;
    p->next = t;
}

//function for inserting in sorted Linked List
void insert_insort(struct node *p, int data)
{
    struct node *t;
    struct node *tail = NULL;
    t = new (struct node);
    t->data = data;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
    }
    while (p && p->data <= data)
    {
        tail = p;
        p = p->next;
    }
    t->next = tail->next;
    tail->next = t;
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
    cout << "Inserting 22 in sorted list" << endl;
    insert_insort(first, 22);
    cout << "Modified List" << endl;
    cout << "List : ";
    display(first);
    cout << "Inserting 56 in sorted list" << endl;
    insert_insort(first, 56);
    cout << "Modified List" << endl;
    cout << "List : ";
    display(first);
    return 0;
}
