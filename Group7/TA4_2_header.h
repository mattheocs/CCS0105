#ifndef TA4_2_HEADER_H
#define TA4_2_HEADER_H

#include <iostream>

template <typename T>
class Stack {
private:
    T* a;
    int n;
    int top;

public:
    Stack(int size);
    void push(T element);
    T pop();
    void display();
    void operations();
};

#endif
