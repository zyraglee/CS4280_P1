CS4280 P1: Scanner

From this project, I've learned the basic concept of "taking input and producing input".
This project used OPTION 3 with FSA and DRIVER (pdf, and images of table and graph is this directory)
This project contains the same argument as P0 and is ran just like P0.

Usage:  ./scanner
	./scanner

Files and Functions

scanner.h
	- contains function prototype and variables used for scanner.c

scanner.c	
	- takes in an input from main and the number of lines and is processed by driver() that loops 
	  through the table to process the input one character at a time.
	
	- the tokens,line numbers,and token types are stored in a struct while the
	  keywords, identifiers, integers, operators, and delimiters are represented as
	  a numeric value stored in enum.
	
token.c	- the struct and enum can be found here and will be used to initialize the FSA table
	
	- contains a function that determines whether the character is an alphabet, operator, delimeter or 	    an operator.
        
	- if a keyword exists, the string is stored in its respective token type

	- it checks for errors and makes sure that the first character begins with a capital letter,
	  if an identifier is longer than 8 characters
	
	- removes a single line of code that starts with '\'

testScanner.h 
	- contains function prototype usedd for testScanner.c
testScanner.c
	- after scanner processed each characters and have stored an array of tokens,
	  this functions iterates through each token to be compared with the list of token types listed
	  in the enum

main.c
	- the function to create the FSA table is called here.
	- only takes one or two  arguments that includes the executable and test a test file
	- if the program is ran by itself, it will take standard input from user using the keyboard.
		- when done, user presses ENTER and CTRL+D
		- the input will be sent to the driver function from scanner for processing
        - if program is ran along with a <file> as an argument, takes it with or without the file extension.
		- driver function gets called for file to be processed
	- the end of token instance and line number is initialized here
	- this is where the function that checks the keyword from scanner.c and the testScanner function
	  from testScanner.c is called by including their respective headers.
