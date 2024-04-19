#include <iostream>
using namespace std;

int main() {
    // Integer data types
    short int shortIntValue = 10;
    int intValue = 100;
    long int longIntValue = 10000;
    long long int longLongIntValue = 100000;

    // Floating-point data types
    float floatValue = 3.14f;
    double doubleValue = 3.14159;
    long double longDoubleValue = 3.1415926535;

    // Character data type
    char charValue = 'A';

    // Boolean data type
    bool boolValue = true;

    // Displaying values
    cout << "Short int value: " << shortIntValue << endl;
    cout << "Int value: " << intValue << endl;
    cout << "Long int value: " << longIntValue << endl;
    cout << "Long long int value: " << longLongIntValue << endl;
    cout << "Float value: " << floatValue << endl;
    cout << "Double value: " << doubleValue << endl;
    cout << "Long double value: " << longDoubleValue << endl;
    cout << "Character value: " << charValue << endl;
    cout << "Boolean value: " << boolalpha << boolValue << endl;

    return 0;
}
