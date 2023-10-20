#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue {
public:
    Queue() : bottom(nullptr), top(nullptr) {}

    bool isEmpty() {
        return bottom == nullptr;
    }

    bool enqueue(char myChar) {
        Node* myNode = new Node(myChar);

        if (isEmpty()) {
            bottom = top = myNode;
        }
        else {
            bottom->nextNode = myNode;
            bottom = myNode;
        }

        return true;
    }

    bool dequeue() {

        if (isEmpty()) 
            return false;
        
        Node* temp = top;
        top = top->nextNode;
        delete temp;

        return true;
    }

    char peek() {
        if (isEmpty()) {
            throw runtime_error("Queue is empty.");
        }
        return top->value;
    }

private:
    Node* bottom;
    Node* top;
};

#endif