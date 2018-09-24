//define sum, miximum, minimum between two numbers given by the user
//include library
#include<iostream>
using namespace std;
//ask the user the first number
int add(int c,int d,int x){
	if(x==1){//addition
		int s=c+d;
		//print the sum
		cout<<"The sum is "<<s;
	}
	else{}
	return 0;
}
//call of the function of maximum 
int max(int c,int d, int y){
	if(y==2){
		int m;
	//which is greater
		if(c>d){m=c;}
			else{m=d;}
		//print the max
		cout<<"The maximum is "<<m;}
	else{}
	return 0;
}
//call of the main function for minimum
int min(int c,int d,int z){
	if(z==3){
		int n;
		//condition for which is greater
		if(c>d){n=d;}
		else{n=c;}
		//print the minimum
		cout<<"The minimum is "<<n;
	}
	else{}	
	return 0;
}
//define main function
int main(){
	//define variables
	int e,f,g;
	//ask the user
	cout<<"If you want to sum then press 1."<<endl;
	cout<<"If you want to find the max press 2."<<endl;
	cout<<"If you want to find the  min press 3."<<endl;
	cin>>g;
	cout<<"Give the values.";	
	cin>>e>>f;	
	//argument with add function
	add(e,f,g);
	//argument with  max function
	max(e,f,g);
	//argument with min function
	min(e,f,g);
	return 0;
} 
