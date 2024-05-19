#include <iostream>
#include "2_1_Header.h"
#include "2_1_Implementation.cpp"

using namespace std;

int main() {
    char choice;
    
    do {
        int option;
        
        cout << "\n" << "What do you want to do?" << "\n";
        cout << "[1] Find the string length" << "\n";
        cout << "[2] Compare two strings" << "\n";
        cout << "[3] Concatenate two strings" << "\n";
        cout << "[4] Exit" << "\n\n";
        cout << "Enter choice: ";
        cin >> option;
        
        switch (option) {
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
            default:
                cout << "Invalid option. Please try again." << "\n\n";
                break;
        }
        
        cout << "Do you want to continue? [Y/N]: ";
        cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}
