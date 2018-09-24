//find the sum of squre of all even numbers between any two numbers
//include library
#include<iostream>
using namespace std;
//function while sum of squre of even numbers
int sumSqrEven(int i,int j){
	int k=0;int a,b;
	//ask user
	cout<<"Give the values."<<endl;
	cin>>i>>j;
	//find greater one
	if(i<j) {a=i;b=j;}
	else{a=j;b=i;}
	//sum using while loop
	int n=a-(a%2)+2;
	while(n<b){k=k+(n*n);n=n+2;}
	//print the sum
	cout<<"The sum of sqrs of even numbers "<<k;
	return k;
}
//define main function
int main(){
	//define variables
	int f,g;
	//argue with sumSqrEven function
	sumSqrEven(f,g);
	return 0;
}
