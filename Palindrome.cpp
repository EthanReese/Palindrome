#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
	#define LENGTH 80
	
	//Prompt the user for input
	cout << "Enter the characters you want tested" << endl;
	char c[LENGTH] = {'0'};
	//Get the user input and put it into a character array
	cin >> c;
	//Loop through the array and remove all punctuation items
	for(int a = 0; a < LENGTH; a++){
		//If c at index a is a punctuation delete the character and remove the rest of the characters forward
		if(ispunct(c[a]) || c[a] == ' '){
			for(int b = a; LENGTH; b++){
				//If its about to run into the array index then it needs to just fill with a zero 
				try{
					c[b] = c[b+1];
				}catch(...){
					c[b] = '0';
				}
				
			}
		}
	}
	//Convert all of the characters to lowercase
	for(int a = 0; a< LENGTH; a++){
		c[a] = tolower(c[a]);
	}
	//Reverse the array discounting all of the final zeroes
	char cReverse[LENGTH] = {'0'};
	//Find the number of real characters that are in the array
	int d = 0;
	for(int a = 0; a < LENGTH; a++){
		if(c[a] == '0'){
			d = a;
			break;
		}

	}
	//Reverse the array discounting all of the final zeroes
	for(int a = 0; a < LENGTH; a++){
		//Make the character in the new array the value of the last real character minus the counter
		cReverse[a] = c[d-a];
	}
	//Check to see if the new arrays are completely equal
	bool test = true;
	for(int a = 0; a < LENGTH; a++){
		if(!(c[a] == cReverse[a])){
			test = false;
			break;
		}
	}
	//If they are equal print the output message
	if(test){
		cout << "Palindrome";
	}
	else{
		cout << "Not a palindrome";
	}


	return 0;
}
