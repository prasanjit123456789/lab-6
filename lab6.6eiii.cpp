//find the sum of squre of all even numbers between any two numbers and to store them
//include library
#include<iostream>
using namespace std;
//function while sum of squre of even numbers
int sumSqrEvenNumbers(int i,int j){
	//define variables
	int k=0;int a,b;
	//condition for the greater 
	if(i<j){a=i;b=j;}
	else{a=j;b=i;}
	//sum using loop
	for(int n=a-(a%2)+2;n<b;n=n+2){k=k+(n*n);}
	return k;
}
//define main function
int main(){
	//define variables
	int f,g,sumSqrEven;
	//ask the user abou the two numbers
	cout<<"Give the numbers";
	cin>>f>>g;
	//argue with sumSqrEven function
	sumSqrEven=sumSqrEvenNumbers(f,g);
	return 0;
}
