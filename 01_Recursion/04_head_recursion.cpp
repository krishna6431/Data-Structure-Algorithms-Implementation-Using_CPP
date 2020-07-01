//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;
int function1(int n);

void function(int n){

	if(n>0){		
		function(n-1);
		cout << n << " ";
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

// converting head Recursion to loop
int function1(int n){
	int i=1;
	while(i<=n){
		cout << i <<" ";
		i++;
	}
	return 0;

}