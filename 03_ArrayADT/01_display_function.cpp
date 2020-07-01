//Data Structure Course
//All Codes Are Written by Krishna
//Arrays ADT(abstract data type)

#include<iostream>
#include<bits/stdc++.h>
#define len(x) *(&x+1)-x   //macro definition for finding length
using namespace std;

// display function for printing element of array
// time complexity ---> o(n)
void display(int arr[],int l){
  for(int i=0; i<l; i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[5]={1,2,3,4,5};
  display(arr,len(arr));
  cout << endl;
  return 0;
}
