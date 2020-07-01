//Data Structure Course
//All Codes Are Written by Krishna
//Recursion
#include<iostream>
using namespace std;

void function(int n){

	if(n>0){
		cout << n << " ";
		function(n-1);
	}
}
int main(){
	int x=10;
	function(x);
	return 0;
}
