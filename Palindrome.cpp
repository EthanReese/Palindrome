#include <iostream>
#include <cstdlib>

using namespace std;


int main(){
	#define LENGTH 80
	
	//Prompt the user for input
	cout << "Enter the characters you want tested" << endL;
	char c[LENGTH] = {'0'};
	//Get the user input and put it into a character array
	cin >> c;
	//Loop through the array and remove all punctuation items
	for(int a: c){
		//If c at index a is a punctuation delete the character and remove the rest of the characters forward
		if(ispunct(c[a])){
			int b = a;
			for(b : c){
				//If its about to run into the array index then it needs to 
				if(!(b = sizeof(c) - 1)){
					c[b] = c[b+1]
				}
				else{
					c[b] = '0';
				}
			}
		}
	}


















return 0;
}
