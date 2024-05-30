#ifndef TA5_HEADER_H
#define TA5_HEADER_H
#define MAX_SIZE 100

#include <iostream>

using namespace std;
class Queue {
private:
	int front, rear, size;
	int arr[MAX_SIZE];
public:
	Queue() {
		front = rear = -1;
		size = 0;
	}
	bool isEmpty();
	bool isFull();
	void enqueue(int x);
	int dequeue();
	int getSize();
	void displayQueue();
	int getFront();
};

#endif
