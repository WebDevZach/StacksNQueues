#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"

class Queue {
public:
    Queue() : bottom(nullptr), top(nullptr) {}

    bool isEmpty() {
        return bottom == nullptr; // queue is empty when the bottom pointer is null
    }

    bool enqueue(char myChar) {
        Node* myNode = new Node(myChar); // creates new node

        if (isEmpty()) {
            bottom = top = myNode;
        }
        else {
            bottom->nextNode = myNode; // sets the bottom node so that it points to the new node 
            bottom = myNode; // the new node becomes the bottom 
        }

        return true;
    }

    bool dequeue() {

        if (isEmpty()) 
            return false;
        
        Node* temp = top; // stores the node address the top is pointing too
        top = top->nextNode; // reassigns the top node to the node that top is pointing to 
        delete temp; // deletes the top node 

        return true;
    }

    char peek() {
        if (isEmpty()) {
            throw runtime_error("Queue is empty.");
        }
        return top->value; // returns the value held in the top node 
    }

private:
    Node* bottom;
    Node* top;
};

#endif