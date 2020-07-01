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
//display function
void display(struct Array arr){
  for(int i=0; i<arr.length; i++){
    cout << arr.A[i] << " ";
  }
  cout << endl;
}
//swapping function
void swap(int *x , int *y){
  int temp;
  temp= *x;
  *x = *y;
  *y = temp;
}
// improved linear search
// time complexity ----> o(1) in bestcase
int opt_linear_search(struct Array *arr,int key){
   for(int i=0;i<arr->length;i++){
     if(arr->A[i]==key){
       swap(&arr->A[i],&arr->A[i-1]);
       return i;
     }
   }
   return -1;
}

// more improved linear search for frequent keys
// time complexity ----> o(1) in bestcase
int m_opt_linear_search(struct Array *arr,int key){
   for(int i=0;i<arr->length;i++){
     if(arr->A[i]==key){
       //swap key index with first element of array
       swap(&arr->A[i],&arr->A[0]);
       return i;
     }
   }
   return -1;
}

// linear search
// time complexity ----> o(n)
int linear_search(struct Array arr,int key){
   for(int i=0;i<arr.length;i++){
     if(arr.A[i]==key){
       return i;
     }
   }
   return -1;
}
int main(){
  struct Array arr={{1,2,3,4,5},20,5};
  display(arr);
  cout << "Element index :  " << linear_search(arr,3) <<endl;
  cout << "Element index :  " << linear_search(arr,7) <<endl;
  display(arr);
  // cout << "Element index :  " << opt_linear_search(&arr,3) <<endl;
  // cout << "Element index :  " << opt_linear_search(&arr,7) <<endl;
  // display(arr);
  // cout << "Element index :  " << opt_linear_search(&arr,3) <<endl;
  // display(arr);
  // cout << "Element index :  " << opt_linear_search(&arr,3) <<endl;
  // display(arr);
  cout << "Element index :  " << m_opt_linear_search(&arr,3) <<endl;
  display(arr);
  cout << "Element index :  " << m_opt_linear_search(&arr,3) <<endl;
  return 0;
}
