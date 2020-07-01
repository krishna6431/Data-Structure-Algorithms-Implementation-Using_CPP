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
    return first;
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

//function for counting no of elements
int count(struct node *p)
{
    if (!p)
        return 0;
    else
        return count(p->next) + 1;
}

//finction for concatenating two linked list;
void cat(struct node *first, struct node *second)
{
    while (first->next)
    {
        first = first->next;
    }
    first->next = second;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif

    int arr[] = {11, 21, 33, 44, 44, 66, 77, 88, 88};
    struct node *first = create(arr, 9);
    cout << "First List : ";
    display(first);
    int arr1[] = {13, 23, 34, 45, 54, 67, 78, 89, 100};
    struct node *second = create(arr1, 9);
    cout << "Second List : ";
    display(second);
    cout << "Concatenate....." << endl;
    cat(first,second);
    display(first);
    return 0;
}
