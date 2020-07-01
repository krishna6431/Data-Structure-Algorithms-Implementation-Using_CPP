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

// function to create CLL linked list having elements of an array
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
    } while (p !=head);
}
//recursive display function

void r_display(struct node *p , struct node * head){
    static int flag =0;
    if(p!=head || flag==0){
        flag =1 ;
        cout << p->data << " ";
        r_display(p->next , head);
    }
    flag =0 ;
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
    r_display(first,first);
    return 0;
}
