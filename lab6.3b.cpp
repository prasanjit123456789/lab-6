//find the maximum by using void and reference
//include library
#include<iostream>
using namespace std;
//define void by reference and the function for maximum
void max(int &a,int &b, int &c){
	
	if(a>b){c=a;}
	else{c=b;}
}
	//define main function
int main(){
	//define variables
	int a,b,c;
	//ask the user about the value of two integers
	cout<<"Give the values. ";
	cin>>a>>b;
	//argue with max function
	max(a,b,c);
	return 0;
}
