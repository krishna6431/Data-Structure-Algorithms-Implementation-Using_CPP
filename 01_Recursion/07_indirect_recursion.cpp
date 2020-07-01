//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;
int function1(int n);
int function2(int n);

int function1(int n){

	if(n>0){
		cout << n << " ";
		function2(n-1);		
	}
	return 0;
}
int function2(int n){
	if(n>1){
		cout << n << " ";
		function1(n/2);
	}
    return 0;
}

int main(){
	int x=20;
	function1(x);
	cout << endl;
	return 0;
}

