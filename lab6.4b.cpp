//find the minimum by using void and reference
//include library
#include<iostream>
using namespace std;
//define void by reference and the function for maximum
void min(int &a,int &b,int &c){
	if(a>b){c=b;}
	else{c=a;}
}
//define main function
int main(){
	//define variables
	int a,b,m;
	//ask the user about the value of two integers
	cout<<"Give the values. ";
	cin>>a>>b;
	//argue with max function
	min(a,b,m);
	return 0;
}
