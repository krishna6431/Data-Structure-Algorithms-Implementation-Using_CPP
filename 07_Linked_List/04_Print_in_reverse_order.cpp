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
//display function
void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void rec_display(struct node *p)
{
    if (p)
    {
        cout << p->data << " ";
        rec_display(p->next);
    }
}

void rev_print(struct node* p){
    if(p){
        rev_print(p->next);
        cout << p->data << " ";
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {1, 2, 3, 4, 5};
    create(arr, 5);
    display(first);
    rec_display(first);
    cout << endl;
    rev_print(first);

    return 0;
}
