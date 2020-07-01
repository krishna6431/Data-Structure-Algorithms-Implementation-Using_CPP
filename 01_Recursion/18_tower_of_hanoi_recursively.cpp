//Data Structure Course 
//All Codes Are Written by Krishna
//Recursion 
#include<iostream>
using namespace std;

//TOWER OF HANOI PROBLEM SOLUTION RECURSIVELY
void toh(int n,char a, char b, char c){
	if(n>0){
	toh(n-1,a,c,b);
	cout << "MOV DISK FROM "<< a << " TO DISK " << c << endl;
	toh(n-1,b,a,c);  
    }
}
int main(){
	toh(3,'A','B','C');
	return 0;
}

/*
OUTPUT SHOULD BE :
		MOV DISK FROM A TO DISK C
		MOV DISK FROM A TO DISK B
		MOV DISK FROM C TO DISK B
		MOV DISK FROM A TO DISK C
		MOV DISK FROM B TO DISK A
		MOV DISK FROM B TO DISK C
		MOV DISK FROM A TO DISK C
*/