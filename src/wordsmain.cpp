#include "lib.hpp"

//On the 4th line we declare the function, which we'll use in the main function.
void WordSwap(string word);
int main(){
	//MyWord is a string, which user will input to the program.
	string MyWord;
	cout <<"Input your word:";
	cin >> MyWord;
	WordSwap(MyWord);
}

	
