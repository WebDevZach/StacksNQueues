/*
Zachary Leyes
CIS 2207
10/20/2023
Palindromes
*/

using namespace std;

#include <iostream>

#include "Node.h"
#include "Stack.h"


int main()
{

	Stack myStack;

	cout << myStack.isEmpty();

	myStack.push('B');
	myStack.push('B');
	myStack.push('B');
	myStack.push('B');
	myStack.push('c');
	cout << endl << myStack.peek() << endl;



	return 0;
}

	