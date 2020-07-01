//Data Structure Course
//All Codes Are Written by Krishna
//Arrays ADT(abstract data type)

#include<bits/stdc++.h>
using namespace std;


struct Array
{
  int A[20];
  int size;
  int length;
};
//function for displaying element of array
// time complexity----> o(n)
void display(struct Array arr){
  cout << "Elements are : " ;
  for(int i=0; i<arr.length;i++){
    cout << arr.A[i] << " ";
  }
  cout << endl;
}

//function for reversing Array
void reversed1(struct Array *arr){
  int i,j;
  for(i=0,j=arr->length -1 ; i<=j ; i++,j--){
    swap(arr->A[i],arr->A[j]);
  }
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  cout << "Original Array: ";
  display(arr);
  reversed1(&arr);
  cout << "Reversed Array: ";
  display(arr);
  cout << endl;
  return 0;
}
