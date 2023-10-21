#ifndef ISPALINDROME_H
#define ISPALINDROME_H


bool isPalindrome(string testString) {

	size_t numOfChars = testString.length(); // finds length of the string

	Queue myQueue;
	Stack myStack;
	int counter = 0;

	for (int x = 0; x < numOfChars; x++) {
		if (testString[x] != ' ') // pushes a non space character to both the stack and queue 
		{
			myQueue.enqueue(testString[x]);
			myStack.push(testString[x]);
			counter++; // counts all non space characters in the string 
		}
	}

	//loops for each item in the queue and stack 
	for (int x = 0; x < counter; x++) {

		//Checks if the characters are equal if not returns false
		if (myQueue.peek() != myStack.peek()) {
			return false;
		}

		//removes a node from the queue and stack
		myQueue.dequeue();
		myStack.pop();
	}

	return true;
}

#endif
