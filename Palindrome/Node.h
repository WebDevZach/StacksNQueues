#ifndef NODE_H
#define NODE_H


class Node {
public:

	Node(char myChar) {
		this->value = myChar;
	}

	Node* nextNode = nullptr; // points to the next node
	char value; // holds the node's value 
};


#endif