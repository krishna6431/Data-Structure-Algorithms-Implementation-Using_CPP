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

// function for checkin if link is sorted ort not
string is_sorted(struct node *p){
    while(p->next){
        if(p->data > p->next->data){
            return "Not Sorted";
        }
        p=p->next;
    }
    return "Sorted";
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {11, 21, 33, 44, 55, 66 , 77 , 88 , 99};
    create(arr, 9);
    cout << "List : ";
    display(first);
    cout << is_sorted(first) << endl;
    
    int arr1[] = {11, 21, 33, 44, 55, 66 , 77 , 100 , 99};
    create(arr1, 9);
    cout << "List : ";
    display(first);
    cout << is_sorted(first) << endl;
    return 0;
}
