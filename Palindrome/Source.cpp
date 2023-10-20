/*
Zachary Leyes
CIS 2207
10/20/2023
Palindromes
*/




using namespace std;

#include <iostream>
#include "Node.h"


void printValues() {
	
}

template <typename T, typename... Args>
	void printValues(const T & value, const Args&... args) {
		cout << value << " ";
		printValues(args...); // Recursively call the function with the remaining arguments.
	}

int main()
{

	Node nodeOne('A');
	Node nodeTwo('B');
	Node nodeThree('C');

	nodeOne.link(nodeTwo);
	nodeTwo.link(nodeThree);



/*	Node* myNode = nodeOne.nextNode;

	cout << myNode->charValue;*/ // used for deferencing an object 


	printValues(1, 2, 3, 4, 5, 6, 7, 9, 10, 11);


	return 0;
}

	