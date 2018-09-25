//converts lower case to upper case and upper case to lower case
//define library
#include<iostream>
using namespace std;
//callingof the upper case to convert to capital
char toUpper(char ab){
	//according to ASCII small letter is 32greater than capital letters
	ab=ab-32;
	cout<<"The upper case is "<<ab<<endl;
	return ab;
}
//calling of the lower case to convert to small
char toLower(char aba){
	//according to ASCII small letteris 32 greater than capital letters
	aba=aba+32;
	cout<<"The lower case is "<<aba<<endl;
	return aba;
}
//define main function
int main(){
	//define variables
	char inp;
	//ask the user about the input
	cout<<"Give the character."<<endl;
	cin>>inp;
	//condition to call the toUpper() function
	if(inp>=(97) && inp<=(122)){toUpper(inp);}
	//condition to call the toLower() function
	else if(inp>=(65) && inp<=(90)){toLower(inp);}
	//condition if the inout is other than small or capital letter
	else{cout<<"Give an input which is an alphabate.";}
	return 0;
}
