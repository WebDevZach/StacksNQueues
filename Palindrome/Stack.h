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

	return true;
}

bool Stack::pop()
{
	Node* temp = top;
	top = top->nextNode;
	delete temp;
}





#endif

