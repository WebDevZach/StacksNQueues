/*
Zachary Leyes
CIS 2207
10/20/2023
Palindromes
*/

using namespace std;

#include <iostream>
#include <string>

#include "Node.h"
#include "Queue.h"
#include "Stack.h"
#include "isPalindrome.h"


int main()
{

	string testString;

	for (int condition = 1; condition < 11; condition++) {

		switch (condition) {
		case 1:
			testString = "racecar";
			break;
		case 2:
			testString = "repaper";
			break;
		case 3:
			testString = "level";
			break;
		case 4:
			testString = "kayak";
			break;
		case 5:
			testString = "rotator";
			break;
		case 6:
			testString = "never odd or even";
			break;
		case 7:
			testString = "now sir a war is won";
			break;
		case 8:
			testString = "was it a car or a cat i saw";
			break;
		case 9:
			testString = "dennis and edna sinned";
			break;
		case 10:
			testString = "Happy Good Day";
			break;
		}

		cout << testString << ": ";
		cout << isPalindrome(testString) << endl;
	}



	return 0;
}

