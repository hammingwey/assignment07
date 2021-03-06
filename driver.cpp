/*
(1) 
This project deals with a simple kind of
expression tree, where there are two kinds of
nodes:

(a) Leaf nodes, which contain a real number as
their entry;

(b) Nonleaf nodes, which contain either the character
+ or the character * as their entry, and have exactly
two children.



For this project, implement a class for expression
trees, including operations for building expression
trees. Also include a recursive function to “evaluate”
a non-empty expression tree using these rules:

(a) If the tree has only one node (which must be
a leaf), then the evaluation of the tree returns the real
number that is the node’s entry;

(b) If the tree has more than one node, and the
root contains +, then first evaluate the left subtree,
then evaluate the right subtree, and add the results.
If the root contains *, then evaluate the two subtrees
and multiply the results.



For example, consider the small expression tree shown to the right.

The left subtree evaluates to 3+7, which is 10.

The right subtree evaluates to 14. 

So the entire tree evaluates to 10*14, which is 140.
*/

#include <iostream>
#include <sstream>
#include <string>

#include "InputValidation.h"

using namespace std;

int validateInt();


int main()
{
    
    int test = validateInt();
    
    cout << test;
    
    return 0;
}

#include <iostream>
#include <sstream>
#include <string>

#include "InputValidation.h"

using namespace std;


int validateInt ()
{
    string userInput;
	double userInputNum;
	bool keepGoing = true;
    
    do
	{
		//ASK FOR INPUT
		cout << "Please enter the \"N\" value for the board size: ";

		cin >> userInput;

		cout << endl;

		stringstream convert(userInput); // stringstream used for the conversion initialized with the contents of Text


        //CHECK INPUT, 
            //first if is for any word qualifications
            // else throw error that input is not valid

		//Give the value to userInputNum using the characters in the string
		//If it fails check for "quit" input. Otherwise give error and ask for new input.
		if (!(convert >> userInputNum))//give the value to Result using the characters in the string
		{
			if (userInput == "quit")
			{
				keepGoing = false;
			}

			else
			{
				cout << endl << "Error: Invalid input." << endl;
				cout << "Enter \"quit\" to exit the program." << endl;
				cout << "Otherwise please enter a positive whole number." << endl << endl;
				cin.clear();
			}
		}
		// Valid input, it was a number
		else
		{
		    // CHECK FOR INT/*
		    int N = userInputNum;

            // Check that the number entered is a whole number
			if (userInputNum != N)
			{
				cout << "Error: Number entered is not a whole number." << endl << endl;
			}
			else
			{
				return N;
			}
		}

	} while (keepGoing != false);
}

int validateDouble ()
{
    string userInput;
	double userInputNum;
	bool keepGoing = true;
    
    do
	{
		//ASK FOR INPUT
		cout << "Please enter the \"N\" value for the board size: ";

		cin >> userInput;

		cout << endl;

		stringstream convert(userInput); // stringstream used for the conversion initialized with the contents of Text


        //CHECK INPUT, 
            //first if is for any word qualifications
            // else throw error that input is not valid

		//Give the value to userInputNum using the characters in the string
		//If it fails check for "quit" input. Otherwise give error and ask for new input.
		if (!(convert >> userInputNum))//give the value to Result using the characters in the string
		{
			if (userInput == "quit")
			{
				keepGoing = false;
			}

			else
			{
				cout << endl << "Error: Invalid input." << endl;
				cout << "Enter \"quit\" to exit the program." << endl;
				cout << "Otherwise please enter a positive whole number." << endl << endl;
				cin.clear();
			}
		}
		// Valid input, it was a number. Return Double.
		else
		{
			
			return userInputNum;
		}

	} while (keepGoing != false);
}