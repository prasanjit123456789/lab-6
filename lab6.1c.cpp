//a function recieves the unitCst,units and taxRt,salesTx,totDue and out puts ina very readable format
//incluse library
#include<iostream>
using namespace std;
//asking the user about the values, calculat the sales tax and total due and display them by a function using reference and void
void askUserCalDatDisBill(float &unitCst,int &units,float &taxRt,float &salesTx,float &totDue){
	//ask the user about the values
	cout<<"What is the unit cost ?"<<endl;
	cin>>unitCst;
	cout<<"The no of units is "<<endl;
	cin>>units;
	cout<<"What is the tax rate ?"<<endl;
	cin>>taxRt;
	//calculation of sales tax bcz tax rate is in percentage
	salesTx=unitCst*units*taxRt/100;
	//total due calculation
	totDue=salesTx+(units*unitCst);
	//display the values
	cout<<"The unit cost is RS."<<unitCst<<endl;
	cout<<"No. of units is "<<units<<endl;
	cout<<"The tax rate is "<<taxRt<<"%"<<endl;
	cout<<"Sales tax is RS."<<salesTx<<endl;
	cout<<"The total due is RS."<<totDue<<endl;
}
//mainfunction
int main(){
	float unitCst,taxRt,salesTx,totDue;int units;
	//call the function
	askUserCalDatDisBill(unitCst,units,taxRt,salesTx,totDue);
	return 0;
}
