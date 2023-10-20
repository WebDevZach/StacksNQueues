#ifndef NODE_H
#define NODE_H


class Node
{
public:

	Node(char myChar)
	{
		this->value = myChar;
	}

	Node* nextNode = nullptr;
	char value; 
};


#endif