#ifndef STACK_H
#define STACK_H


class Stack
{
public:
	Stack() : top(nullptr) {}

	bool isEmpty();
	bool push(char);
	bool pop();
	char peek();

private:
	Node* top;
};

bool Stack::push(char myChar)
{
	Node myNode(myChar);
	myNode.nextNode = this->top;
	top = myNode.nextNode;

	if (isEmpty())
		return false;

	return true;
}

bool Stack::pop()
{
	if (isEmpty()) 
		return false;
	

	Node* temp = top;
	top = top->nextNode;

	delete temp;

	return true;
}

bool Stack::isEmpty()
{
	if (top == nullptr)
		return true;
	else
		return false;
}

char Stack::peek()
{
	if (isEmpty)
	{
		return;
	}

	return top->value;
}




#endif

