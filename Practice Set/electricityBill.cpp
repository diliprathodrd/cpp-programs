#include <iostream>
using namespace std;

int main() {
    float units, rate, bill;
    
    // Input
    cout << "Enter units consumed: ";
    cin >> units;
    
    // Determine rate based on units consumed
    if (units <= 50)
        rate = 0.50;
    else if (units <= 150)
        rate = 0.75;
    else if (units <= 250)
        rate = 1.20;
    else
        rate = 1.50;
    
    // Calculate bill
    bill = units * rate;
    
    // Output
    cout << "Electricity Bill: $" << bill << endl;
    return 0;
}
