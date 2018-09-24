/*ask the user about  the unitcst,units and taxrates and call the function that calculates
 sales tax and total due and return it to calling module*/
//include library
#include<iostream>
using namespace std;
//call the function that will calculate
void salesTaxandTotal(float &unitCst,int &units,float &taxRt,float &salesTax,float &totDue){
	//sales tax calculation
	salesTax=unitCst*units*taxRt/100;
	//total cost calculation
	totDue=salesTax+(unitCst*units);
}
//define main function
int main(){
	//define variables
	float tr,c,st,to;int u;
	//ask the user about the unitcst,units and tax rates
	cout<<"Give the unitcost."<<endl;
	cin>>c;
	cout<<"Give the units."<<endl;
	cin>>u;
	cout<<"Give the tax rate."<<endl;
	cin>>tr;
	//argue withthe salesTaxandTotal function
	salesTaxandTotal(c,u,tr,st,to);
	return 0;
}
