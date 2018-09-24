//find the sum of squre of all odd numbers between any two numbers and to store it
//include library
#include<iostream>
using namespace std;
//function while sum of squre of odd numbers
int sumSqrOddNumbers(int i,int j){
	//define variables
	int k=0;int a,b;
	//condition for greater 
	if(i<j){a=i;b=j;}
	else{a=j;b=i;}
	//sum using loop
	for(int n=a+1+(a%2);n<b;n=n+2){k=k+(n*n);}
	return k;
}
//define main function
int main(){
	//define variables
	int f,g,sumSqrOdd;
	//ask the user abou the two numbers
	cout<<"Give the numbers ";
	cin>>f>>g;
	//argue with sumSqrOdd function
	sumSqrOdd=sumSqrOddNumbers(f,g);
	return 0;
}
