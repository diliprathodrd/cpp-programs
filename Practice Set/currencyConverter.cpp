#include <iostream>
using namespace std;

int main() {
    float amount, convertedAmount;
    const float USD_TO_INR = 83;
    
    // Input
    cout << "Enter amount in USD: $";
    cin >> amount;
    
    // Conversion
    convertedAmount = amount * USD_TO_INR;
    
    // Output
    cout << "Equivalent amount in INR: Rs." << convertedAmount << endl;
    return 0;
}
