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
//max function to compute minimum element 
// time complexity----> 0(n)
int min(struct Array arr){
    int min = arr.A[0];
    for(int i =1;  i < arr.length ; i++){
        if(arr.A[i]<min){
            min=arr.A[i];
        }
    }
    return min;
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  display(arr);
  cout << "Min Element is: " << min(arr) << endl;
  return 0;
}
