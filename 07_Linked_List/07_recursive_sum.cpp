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
// void display(struct node *p)
// {
//     while (p)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }
//     cout << endl;
// }
void rec_display(struct node *p)
{
    if (p)
    {
        cout << p->data << " ";
        rec_display(p->next);
    }
}

int count(struct node *p){
    int c=0;
    while(p){
        p=p->next;
        c++;
    }
    return c;
}
int sum(struct node *p){
    int s=0;
    while(p){
        s+=p->data;
        p=p->next;
    }
    return s;
}
int rec_sum(struct node *p){
    int s=0;
    if(!p){
        return 0;
    }
    else{
        return p->data + rec_sum(p->next);
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
    // display(first);
    rec_display(first);
    cout << "\n";
    cout << "Count: " << count(first) << endl;
    cout << "Sum: " << sum(first) << endl;
    cout << "Recursive Sum: " << rec_sum(first);

    return 0;
}
