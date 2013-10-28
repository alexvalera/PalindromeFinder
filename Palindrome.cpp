#include "Palindrome.h"
using namespace std; 


bool isPalindrome(string phrase)
{
	//Create return value
	bool retVal = true; 
	//create a vector to hold the selectors
	deque <char> phraseReverse;
	deque <char> phraseForward;
	int trueSize = 0; 
	for (int i = 0; i <phrase.size(); i++)
	{
		if (isalpha(phrase[i]))
		{
			phraseForward.push_back(phrase[i]); //place char into the deque, pushing it to the back 
			phraseReverse.push_front(phrase[i]); //place char into deque, pushing it to the front (reverse)
			trueSize++; //Number of the true size of the phrase (without punctuation or spaces)
		}
	}
	
	
	for (int i = 0; i < trueSize; i++)
	{
		if (phraseForward[i] != phraseReverse[i])
		{
			retVal =false; 
			return retVal;
		}
	}
	
	return retVal; 
	
	
}

int main ( int argc, char *argv[] ){
	 
	
	if (argc != 2){
		cout << "Please input file names correctly. (./Lab4  file.txt output.txt)\n"; 
		
	}
	
	else{
		
		string in_name = argv[1];  
		
		//instantiate file object to open file
		ifstream inFile;  

		//create a variable to hold a string
		string line = ""; 
	
		//Change the file objects to const char*
		const char* in;
	
		//convert the files to c strings in order to be opened
		in = in_name.c_str();
		
		//Create variable to hold line numbers
		int lineNum = 1; 
		
		//Open file
		inFile.open(in);
		
		
		
		while (getline(inFile, line))
		{
			if (isPalindrome(line))
			{
				cout << lineNum << "\n"; 
			}
			lineNum++; 
		}
		
		
		
	}
	

	return 0; 
}