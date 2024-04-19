#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float PI = 3.14;
    
    // Input
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    // Calculation
    area = PI * radius * radius;
    
    // Output
    cout << "Area of circle: " << area << endl;
    return 0;
}
