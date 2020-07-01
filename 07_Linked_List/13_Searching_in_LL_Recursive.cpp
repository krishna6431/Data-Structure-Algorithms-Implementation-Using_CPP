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

//function for searching element
// o(n) complexity
struct node *search(struct node *p, int key)
{
    while (p)
    {
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}
//recursive search function
// o(n) complexity
struct node* r_search(struct node *p , int key){
    if(!p){
        return NULL;
    }
    if(key==p->data){
        return p;
    }
    return r_search(p->next,key);
}


int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {1, 2, 3, 4, 5};
    create(arr, 5);
    cout << "List : ";
    display(first);
    struct node *res;
    res = r_search(first, 4);
    cout << "Key Found At: " << res << " Key is " << res->data << endl;
    res = r_search(first, 7);
    if(res==NULL){
        cout << "Key Not Found";
        return 0;
    }
    cout << "Key Found At: " << res << " Data is " << res->data << endl;
    return 0;
}
