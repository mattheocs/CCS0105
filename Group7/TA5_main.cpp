#include <iostream>
#define MAX_SIZE 100
#include "TA5_header.h"
#include "TA5_implementation.cpp"

using namespace std;

int main() {
	Queue q;
	q.enqueue(5);
	q.enqueue(10);
	q.enqueue(15);
	q.enqueue(20);
	q.displayQueue();
	cout << "Front element: " << q.getFront() << endl;
	q.dequeue();
	q.dequeue();
	q.displayQueue();
	cout << "Front element: " << q.getFront() << endl;
	return 0;
}
