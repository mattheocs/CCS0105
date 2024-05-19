#ifndef HEADER_H
#define HEADER_H

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    void insertAtBeginning(int val);
    void insertAfter(int val, int pos);
    void insert(int val);
    void removeAt(int pos);
    bool search(int val);
    int getSize();
    bool isEmpty();
    bool isFull();
    void printList();
};

#endif
