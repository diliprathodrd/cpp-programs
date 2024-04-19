#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;
    
    // Input
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in percentage): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;
    
    // Calculation
    simpleInterest = (principal * rate * time) / 100;
    
    // Output
    cout << "Simple interest: " << simpleInterest << endl;
    return 0;
}
