//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;
void function(int n){

	if(n>0){
		cout << n << " ";
		function(n-1);
		function(n-1);		
	}
}
int main(){
	int x=10;
	function(x);
	cout << endl;
	return 0;
}

//total no of outputs---> 2^n -1 ---> 2^10 -1 ----> 1023
//total no of recursive call ---> 2^n+1 -1 ---> 2^11 -1 ----> 2047
//time complexity ---> o(2^n)
//space complexity ---> o(n)

