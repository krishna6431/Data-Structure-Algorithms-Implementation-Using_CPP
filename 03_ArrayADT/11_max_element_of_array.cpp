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
//max function to compute maximum element 
// time complexity----> 0(n)
int max(struct Array arr){
    int max = arr.A[0];
    for(int i =1;  i < arr.length ; i++){
        if(arr.A[i]>max){
            max=arr.A[i];
        }
    }
    return max;
}

int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  display(arr);
  cout << "Max Element is: " << max(arr) << endl;
  return 0;
}
