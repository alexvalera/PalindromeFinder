all: Palindrome

Palindrome: Palindrome.o 
		g++ Palindrome.o -o Palindrome
		
Palindrome.o: Palindrome.cpp
		g++ -c Palindrome.cpp
		

clean:

	rm -rf *o lab