#include <iostream>
#include "TA4_1_header.h"
#include "TA4_1_implementation.cpp"
#include <stack>

using namespace std;

void bracesBalance(const string & input);

int main(){

string input;

// Prompts the user to enter braces
cout << "\nEnter a string of braces: ";
cin >> input;
bracesBalance(input);

return 0;
}
