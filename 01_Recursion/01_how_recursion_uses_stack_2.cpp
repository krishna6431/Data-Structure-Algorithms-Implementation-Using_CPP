//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

void function(int n){

	if(n>0){		
		function(n-1);
		cout << n << " ";
	}
}
int main(){
	int x=10;
	function(x);
	return 0;
}
