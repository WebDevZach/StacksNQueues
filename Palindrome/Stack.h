#ifndef STACK_H
#define STACK_H


class Stack {
public:
    Stack() : top(nullptr) {}

    bool isEmpty() {
        return top == nullptr;
    }

    bool push(char myChar) {
        Node* newNode = new Node(myChar);
        newNode->nextNode = top;
        top = newNode;
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            return false;
        }

        Node* temp = top;
        top = top->nextNode;
        delete temp;
        return true;
    }

    char peek() {
        if (isEmpty()) {
            throw runtime_error("Stack is empty.");
        }
        return top->value;
    }

private:
    Node* top;
};

#endif

