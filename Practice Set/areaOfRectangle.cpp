#include <iostream>
using namespace std;

int main() {
    float length, width, area;
    
    // Input
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    
    // Calculation
    area = length * width;
    
    // Output
    cout << "Area of rectangle: " << area << endl;
    return 0;
}
