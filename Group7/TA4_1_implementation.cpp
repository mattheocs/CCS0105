#include <iostream>
#include "TA4_header.h"
#include <stack>

using namespace std;

void bracesBalance(const string & input){
stack<char> stackX;
stack<char> stackY;
for (char i : input) {
if (i == '{') {
stackX.push(i);
} else if (i == '}') {
stackY.push(i);
} else if (stackX.empty() || stackY.empty() ) {
cout << "\nStack is empty. Try again. ";
}
}

if (stackX.size() == stackY.size()) {
cout << "Braces are balanced!" << endl;
} else if (stackX.size() != stackY.size()) {
cout << "\nMinimum number of replacements required: ";
if (stackX.size() > stackY.size()) {
cout << stackX.size() - stackY.size();
} else {
cout << stackY.size() - stackX.size();
}
}
}
