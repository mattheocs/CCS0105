#include <iostream>
#include <string>

using namespace std;

void find_Length();
void compare_Strings();
void concatenate_Strings();

int main()
{
	START:
    int option;
    do {
    cout << "What do you want to do?" << "\n";
    cout << "[1] Find the string length" << "\n";
    cout << "[2] Compare two strings" << "\n";
    cout << "[3] Concatenate two strings" << "\n";
    cout << "[4] Exit" << "\n" << "\n";
    cout << "Enter choice: ";
    cin >> option;
    
    switch (option){
        case 1:
            find_Length();
            break;
        case 2:
            compare_Strings();
            break;
        case 3:
            concatenate_Strings();
            break;
        case 4:
            return 0;
        }
    } while(option != 4);
    return 0;
}
void find_Length() {
    string input;
    int inlength;
    
    cout << "Enter a string: ";
    cin >> input;
    
	inlength = input.length();
	
	int* length = &inlength;
	
	cout << "\n" << "" "Length of the string is: " << *length << "\n\n";
}

void compare_Strings() {
    string input1;
    string input2;
    int *length1;
    int *length2;
    
    cout << "Enter the first string: ";
    cin >> input1;
    cout << "Enter the second string: ";
    cin >> input2;
    
    int len1 = input1.length();
    int len2 = input2.length();
    
    length1 = &len1;
    length2 = &len2;
    
    if (*length1 < *length2) {
        cout << "\n" << "The first string is smaller." << "\n\n";
    } else if (*length1 == *length2) {
        cout << "\n" << "Both strings are equal" << "\n\n";
    } else {
        cout << "\n" << "The first string is bigger." << "\n\n";
    }
}

void concatenate_Strings() {
    string input1;
    string input2;
    string output;
    
    cout << "Enter the first string: ";
    cin >> input1;
    cout << "Enter the second string: ";
    cin >> input2;
    
    output = input1.append(input2);
    cout << "\n" << "Concatenated Output: " << output << "\n\n";
}
