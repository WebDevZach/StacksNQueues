#ifndef NODE_H
#define NODE_H

class Node
{
public:

	Node(char myChar)
	{
		this->charValue = myChar;
	}

	void link(Node nextNode)
	{
		this->nextNode = &nextNode;
	}

	Node* nextNode = nullptr;
	char charValue; 

private:
	/*Node* nextNode = nullptr;
	char charValue;*/
};










#endif