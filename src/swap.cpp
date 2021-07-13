#include "lib.hpp"

//On the 4th and 5th lines, we declare the functions, which we'll use in the WordSwap function.
string* Similiar (string word, int p);
int factorial (int n);

void WordSwap(string word){
	//Variable "size" is the length of "word" string, "count" is how many non-repeating words we can get.
	int size, count=0;
	//Owing to variable similiar we'll commit, that the current word repeats or doesn't repeat in the "allwords" string.
	bool similiar=false;
	size=word.length();
	//With the variable "all_length" we consider the length of "allwords" string, which will be equal to "word"'s factorial.
	int all_length = factorial(word.length());
	string allwords[all_length];
	cout <<"-------------------------" << endl;
	//"For" loops are swapping the word's letters and adding new words to the "allwords" string, after that checking if we have the same word in the "allwords" string. If we don't have, loop is adding the new word to the "allwords" string.
	for(int i = 0; i < size; i++){
		for(int j = 1; j <size; j++){
			swap(word[j-1], word[j]);
			for(int e=0; e<factorial(word.length()); e++){
			if(allwords[e]==word){
				similiar=true;
				break;
			} else {similiar=false;}
			}
			if(similiar==false){
				allwords[count]=word;
				count++;
			}

		}
	}
	//Outputing the "allwords" string.
	for(int i = 0; i < count; i++){
		cout<<allwords[i]<<endl;
	}
	//Outputing how many non-repeating words we have.
	cout<<"Words:"<<count<<endl;
}

