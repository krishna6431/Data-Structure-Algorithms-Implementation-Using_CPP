//Data Structure Course
//All Codes Are Written by Krishna
//Arrays ADT(abstract data type)

#include <bits/stdc++.h>
using namespace std;

struct Array
{
    int A[20];
    int size;
    int length;
};
//function for displaying element of array
// time complexity----> o(n)
void display(struct Array arr)
{
    cout << "Elements are : ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

//function for reversing Array
//time complexity ---->o(n)
void rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[j] >= 0)
        {
            j--;
        }
        if(i<j){
            swap(arr->A[i],arr->A[j]);
        }
    }
}

int main()
{
    struct Array arr = {{-5,1,-4, 2, 3, 4, 5,-1,-7}, 20, 9};
    cout << "Array: ";
    display(arr);
    rearrange(&arr);
    cout << "Rearranged Array: ";
    display(arr);
    cout << endl;
    return 0;
}
