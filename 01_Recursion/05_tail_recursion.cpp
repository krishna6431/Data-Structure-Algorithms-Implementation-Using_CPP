//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;
int function1(int n);

void function(int n){

	if(n>0){
		cout << n << " ";
		function(n-1);		
	}
}
int main(){
	int x=10;
	function(x);
	cout << endl;
	function1(x);
	cout << endl;
	return 0;
}
//CONVERTING TAIL RECURSION TO LOOP
int function1(int n){
	while(n>0){
		cout << n <<" ";
	    n--;
	}
	return 0;
}