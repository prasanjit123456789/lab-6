//find the sum of squre of all odd numbers between any two numbers
//include library
#include<iostream>
using namespace std;
//function while sum of squre of odd numbers
int sumSqrOdd(int i,int j){
	int k=0;int a,b;
	//ask the user about the values
	cout<<"Give the values."<<endl;
	cin>>i>>j;
	//condition for greater
	if(i<j){a=i;b=j;}
	else{a=j;b=i;}
	//sum using loop while
	int n=a+1+(a%2);
	while(n<j){k=k+(n*n);n=n+2;}		
	//print the sum of sqre of odd numbers between them
	cout<<"The sum of sqr of odd numbers is "<<k;
	return k;
}
//define main function
int main(){
	//define variables
	int f,g;
	//argue with sumSqrOdd function
	sumSqrOdd(f,g);
	return 0;
}
