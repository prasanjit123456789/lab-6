//find the sum of all odd numbers between any two numbers and to store it
//include library
#include<iostream>
using namespace std;
//asking  for sum of odd numbers
int sumOddNumbers(int i,int j){
	//define variables
	int k=0;int a,b;
	//condition for greater
	if(i<j){a=i;b=j;}
	else{a=j;b=i;}
	for(int n=a+1+(a%2);n<b;n=n+2){k=k+n;}
	return k;
}
//define main function
int main(){
	//define variables
	int d,e,sumOdd;
	//ask the user abou the two numbers
	cout<<"Give the numbers ";
	cin>>d>>e;
	//argue with the sumOdd function
	sumOdd=sumOddNumbers(d,e);
	return 0;
}
