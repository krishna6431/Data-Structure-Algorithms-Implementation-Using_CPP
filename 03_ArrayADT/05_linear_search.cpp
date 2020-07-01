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
  cout << "Element index :  " << linear_search(arr,3) <<endl;
  cout << "Element index :  " << linear_search(arr,7) <<endl;
  return 0;
}
