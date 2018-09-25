//input a no to change to upper case
#include<iostream>
using namespace std;
//toUpper is a function that changes to upper case
char toUpper(char ab){
	//according to ASCII the capital letter is  32 smaller than corresponding small letter
	ab=ab-32;
	return ab;
}
//main function
int main(){
	//define variable
	char character;
	//ask the user about the input character
	cout<<"The character is "<<endl;
	cin>>character;
	//condition if the input is in a to z
	if(character>= (97) && character<= (122)){toUpper(character);}
	//condition if the input is not in a to z
	else{cout<<"Give the input which is a small alphabet";}
	return 0;
}
