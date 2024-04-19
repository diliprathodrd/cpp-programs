#include <iostream>
using namespace std;

int main() {
    float milesDriven, gallonsUsed, mileage;
    
    // Input
    cout << "Enter miles driven: ";
    cin >> milesDriven;
    cout << "Enter gallons used: ";
    cin >> gallonsUsed;
    
    // Calculation
    mileage = milesDriven / gallonsUsed;
    
    // Output
    cout << "Gas mileage: " << mileage << " miles per gallon" << endl;
    return 0;
}
