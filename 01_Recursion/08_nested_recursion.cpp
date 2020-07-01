//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;
int function1(int n){

	if(n>100){
		cout << n <<" ";
		return(n-10);

	}
	else{
		cout << n <<" ";
		return function1(function1(n+11));
	}
	return 0;
}

int main(){
	int x=95;
	cout << function1(x) <<" ";
	cout << endl;
	return 0;
}

