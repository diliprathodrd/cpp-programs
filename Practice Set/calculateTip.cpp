#include <iostream>
using namespace std;

int main() {
    float billAmount, tipRate, tipAmount;
    
    // Input
    cout << "Enter bill amount: Rs. ";
    cin >> billAmount;
    cout << "Enter tip rate (in percentage): ";
    cin >> tipRate;
    
    // Calculation
    tipAmount = (tipRate / 100) * billAmount;
    
    // Output
    cout << "Tip amount: Rs. " << tipAmount << endl;
    return 0;
}
