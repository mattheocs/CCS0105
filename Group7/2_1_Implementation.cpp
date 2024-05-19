#include "2_1_Header.h"
#include <iostream>

using namespace std;

void find_Length() {
    string input;
    
    cout << "\n" << "Enter a string: ";
    cin >> input;
    
    int length = input.length();
    
    cout << "\n" << "Length of the string is: " << length << "\n\n";
}

void compare_Strings() {
    string input1, input2;
    
    cout << "\n" << "Enter the first string: ";
    cin >> input1;
    cout << "Enter the second string: ";
    cin >> input2;
    
    int length1 = input1.length();
    int length2 = input2.length();
    
    if (input1 < input2) {
        cout << "\n" << "The first string is smaller." << "\n\n";
    } else if (input1 == input2) {
        cout << "\n" << "Both strings are equal." << "\n\n";
    } else {
        cout << "\n" << "The first string is bigger." << "\n\n";
    }
}

void concatenate_Strings() {
    string input1, input2;
    
    cout << "\n" << "Enter the first string: ";
    cin >> input1;
    cout << "Enter the second string: ";
    cin >> input2;
    
    string output = input1 + input2;
    cout << "\n" << "Concatenated Output: " << output << "\n\n";
}
