#include <iostream>
using namespace std;

int main() {
    // Integer constant
    const int INT_CONSTANT = 100;

    // Floating-point constant
    const float PI = 3.14;

    // Character constant
    const char CHAR_CONSTANT = 'A';

    // Boolean constant
    const bool BOOL_CONSTANT = true;

    // Displaying the constants
    cout << "Integer constant: " << INT_CONSTANT << endl;
    cout << "Floating-point constant: " << PI << endl;
    cout << "Character constant: " << CHAR_CONSTANT << endl;
    cout << "Boolean constant: " << boolalpha << BOOL_CONSTANT << endl;

    return 0;
}
