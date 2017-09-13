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
	int counter;
	//Loop through the array and remove all punctuation items
	for(int a: c){
		counter = 0;

		//If c at index a is a punctuation delete the character and remove the rest of the characters forward
		if(ispunct(c[a])){
			int b = a;
			for(b : c){
				//If its about to run into the array index then it needs to 
				if(b = sizeof(c) - 1){

				}
				c[b] = c[b+1];
			}
		}
		if(c[a] == '0'){
			counter++;
			//If there are 10 zeroes in a row
			if(counter > 10){
				break;
			}
		}
	}


















return 0;
}
