//find the sum of all odd numbers between any two numbers
//include library
#include<iostream>
using namespace std;
//asking  for sum of odd numbers
int sumOdd(int i,int j){
	//to get sum
	int k=0;int a,b;
	//ask the user
	cout<<"Give the values."<<endl;
	cin>>i>>j;
	//condition for greater and smaller
	if(i<j) {a=i;b=j;}
	else{a=j;b=i;}
	//sum of odd nos by using loop
	for(int n=a+1+(a%2);n<b;n=n+2){k=k+n;}	
	//print the sum of odd numbers
	cout<<"The sum of odd numbers in between is "<<k;
	return k;
}
//define main function
int main(){
	//define variables
	int d,e;
	//argue with the sumOdd function
	sumOdd(d,e);
	return 0;
}
