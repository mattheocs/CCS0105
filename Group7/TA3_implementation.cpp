#include "TA3_header.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

void LinkedList::insertAtBeginning(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAfter(int val, int pos) {
    Node* temp = head;
    int currentPos = 1;

    while (temp != NULL && currentPos < pos) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        cout << "Invalid position!\n";
        return;
    }

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = temp->next;
    temp->next = newNode;
}

void LinkedList::insert(int val) {
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::removeAt(int pos) {
    Node* temp1 = head;

    if (pos == 1) {
        head = temp1->next;
        delete temp1;
        return;
    }

    for (int i = 1; temp1 != NULL && i < pos - 1; i++) {
        temp1 = temp1->next;
    }

    if (temp1 == NULL || temp1->next == NULL) {
        cout << "Position out of range\n";
        return;
    }

    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}

bool LinkedList::search(int val) {
    Node* current = head;

    while (current != NULL) {
        if (current->data == val)
            return true;
        current = current->next;
    }
    return false;
}

int LinkedList::getSize() {
    Node* tmp = head;
    int length = 0;

    while (tmp != NULL) {
        length++;
        tmp = tmp->next;
    }
    return length;
}

bool LinkedList::isEmpty() {
    return head == NULL;
}

bool LinkedList::isFull() {
    return false;
}

void LinkedList::printList() {
    Node* current = head;

    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
    cout << endl;
}
