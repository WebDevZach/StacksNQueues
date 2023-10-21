#ifndef STACK_H
#define STACK_H


class Stack {
public:
    Stack() : top(nullptr) {}

    bool isEmpty() {
        return top == nullptr; // if the top pointer is null the stack is empty
    }

    bool push(char myChar) {
        Node* newNode = new Node(myChar); // creates new node 
        newNode->nextNode = top; //calls the next method to store the address of the top node (points to top node)
        top = newNode; // sets the new node to the top 
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            return false;
        }

        Node* temp = top; //stores the node address of the current top node 
        top = top->nextNode; //calls the next node method and stores it as the new top node 
        delete temp; // deletes odd top node
        return true;
    }

    char peek() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty.");
        }
        return top->value; // displays value in the top node 
    }

private:
    Node* top;
};

#endif

