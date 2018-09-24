//define minimum without void
//include library
#include<iostream>
using namespace std;
//define max function which will find maximum between two numbers
int min(int a,int b,int m){
	if(a>b){m=b;}
	else{m=a;}
	//print the minimum
	cout<<"The minimum is "<<m;
	return m;
}
//define main function
int main(){
	//define variables
	int c,d,p;
	//ask the user the value of the two numbers to compare
	cout<<"Give the values. ";
	cin>>c>>d;
	//argue with min function	
	min(c,d,p);
	return 0;
}

