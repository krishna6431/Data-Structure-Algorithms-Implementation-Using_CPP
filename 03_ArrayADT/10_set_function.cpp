//Data Structure Course
//All Codes Are Written by Krishna
//Arrays ADT(abstract data type)

#include <iostream>
using namespace std;
#define len(x) *(&x + 1) - x

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
// get a element of array
// time complexity ----> o(1)
int set(struct Array *arr, int index,int data){
    if (index >=0 and index <=arr->length-1){
         arr->A[index]=data;
         cout << "element is set" << endl;
    }
    else{
    cout << "index out of range " << endl;

    }

}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  display(arr);
  set(&arr,3,11);
  set(&arr,6,9);
  display(arr);
  return 0;
}
