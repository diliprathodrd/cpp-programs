#include <iostream>
using namespace std;

int main() {
    float base, height, area;
    
    // Input
    cout << "Enter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    
    // Calculation
    area = 0.5 * base * height;
    
    // Output
    cout << "Area of triangle: " << area << endl;
    return 0;
}
