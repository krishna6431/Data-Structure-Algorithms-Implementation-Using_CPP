//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

int function(int n){

	if(n>0){		
		return function(n-1)+n;
	}
	return 0;
}
int main(){
	int x=5;
	cout << function(x) <<" ";
	return 0;
}