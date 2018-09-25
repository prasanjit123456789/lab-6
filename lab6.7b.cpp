//input a no to change to lower case
#include<iostream>
using namespace std;
//toLower is a function that changes to upper case
char toLower(char ab){
	//according to ASCII the capital letter is  32 smaller than corresponding small letter
	ab=ab+32;
	cout<<ab;
	return ab;
}
//main function
int main(){
	//define variable
	char character;
	//ask the user about the input character
	cout<<"The character is "<<endl;
	cin>>character;
	//condition if the input is in A to Z
	if(character>= (65) && character<= (90)){toLower(character);}
	//condition if the input is not in A to Z
	else{cout<<"Give the input which is a capital alphabet";}
	return 0;
}
