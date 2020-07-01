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

//function checking if array is sorted or not
string isSorted(struct Array arr){
    for(int i =1 ; i < arr.length ; i++){
        if(arr.A[i]<arr.A[i-1]){
            return "Not Sorted";
        }
    }
    return "Sorted";
}


int main()
{
  struct Array arr = {{1, 2, 3, 4, 5}, 20, 5};
  cout << "Array : ";
  display(arr);
  cout << isSorted(arr)<<endl;
  struct Array arr1 = {{1, 2, 5, 4, 5}, 20, 5};
  cout << "Array : ";
  display(arr1);
  cout << isSorted(arr1)<<endl;
  return 0;
}
