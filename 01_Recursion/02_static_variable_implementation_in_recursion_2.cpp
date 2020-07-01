//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

int function(int n){
	static int x=0;

	if(n>0){	
	    x++;	
		return function(n-1)+x;
	}
	return 0;
}
int main(){
	int x=5;
	cout << function(x) <<" ";
	return 0;
}