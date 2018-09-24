#include<iostream>
using namespace std;
//calling of the new function that will calculate the  sales tax and totaldue
void calculate(float &unitCst,int &units,float &taxRt,float &salesTx,float &totDue){
	salesTx=unitCst*units*taxRt/100;
	totDue=salesTx+(units*unitCst);
}
//calling a function that will display the values
void displayBill(float &unitCst,int &units,float &taxRt,float &salesTx,float &totDue){
	//display the values
	cout<<"Unit cost is RS"<<unitCst<<endl;
	cout<<"The number of units is "<<units<<endl;
	cout<<"The tax rate is "<<taxRt<<"%"<<endl;
	cout<<"Sales tax is RS"<<salesTx<<endl;
	cout<<"Total cost is RS"<<totDue<<endl;
	cout<<"THANK YOU AND VISIT AGAIN !";
}
//main function
int main(){
	//define variables
	float unitCst,taxRt,salesTx,totDue;int units;
	//ask the user
	cout<<"What is unit cost ?"<<endl;
	cin>>unitCst;
	cout<<"The no of units is. "<<endl;
	cin>>units;
	cout<<"What is the tax rate ?"<<endl;
	cin>>taxRt;
	//call by functions
	calculate(unitCst,units,taxRt,salesTx,totDue);
	displayBill(unitCst,units,taxRt,salesTx,totDue);
	return 0;
}
