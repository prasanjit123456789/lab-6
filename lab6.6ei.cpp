//find the sum of all even numbers between any two numbers and store it
//include library
#include<iostream>
using namespace std;
//function for sum of even numbers
int sumEvenNumbers(int &i,int &j){
	int k=0;int a,b;
	//condition for the smaller
	if(i<j) {a=i;b=j;}
	else{a=j;b=i;}
	for(int n=a+2-(a%2);n<b;n=n+2){k=k+n;}
	return k;
}
//define main function
int main(){
	//define variables
	int f,g,sumEven;
	//ask the user abou the two numbers
	cout<<"Give the numbers";
	cin>>f>>g;
	//argue the functions askUser
	sumEven=sumEvenNumbers(f,g);
	return 0;
}
