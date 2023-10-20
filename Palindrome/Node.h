#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node(char myChar)
	{
		this->charValue = myChar;
	}

private:
	char* nextValue = nullptr;
	char charValue;
};










#endif