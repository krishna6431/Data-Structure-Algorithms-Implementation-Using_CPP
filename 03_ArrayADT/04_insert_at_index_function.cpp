//Data Structure Course
//All Codes Are Written by Krishna
//Arrays ADT(abstract data type)

#include<iostream>
using namespace std;
#define len(x) *(&x+1)-x

struct Array{
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
//append function for inserting element at end
// time complexity----> o(1)
void append(struct Array *arr,int x){
  if(arr->length<arr->size){
    arr->A[arr->length++]=x;
  }
}
//insert function for inserting element at index
// time complexity----> o(n)
void insert(struct Array *arr, int index , int data ){
  if(index >=0 && index <=arr->length-1){
    for(int i=arr->length;i>index;i--){
      arr->A[i]=arr->A[i-1];
    }
  }
  arr->A[index]=data;
  arr->length++;
}

int main(){
  struct Array arr={{1,2,3,4,5},20,5};
  display(arr);
  append(&arr,6);
  display(arr);
  insert(&arr,4,7);
  display(arr);
  return 0;
}
