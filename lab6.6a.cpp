//find the sum of all even numbers between any two numbers
//include library
#include<iostream>
using namespace std;
//function for sum of even numbers
int sumEven(int i,int j){
	//to get sum
	int k=0;int a,b;
	//ask the user
	cout<<"Give the values."<<endl;
	cin>>i>>j;
	//condition for greater 
	if(i<j) {a=i;b=j;}
	else{a=j;b=i;}
	//sum by loop of the even nos
	for(int n=a-(a%2)+2;n<b;n=n+2){k=k+n;} 
	cout<<"The sum of even numbers is "<<k;
	return k;
}
//define main function
int main(){
	//define variables
	int f,g;
	//argue the functions askUser
	sumEven(f,g);
	return 0;
}
