#include <iostream>
using namespace std;

int main() {
    float tempCelsius, tempFahrenheit;
    
    // Input
    cout << "Enter temperature in Celsius: ";
    cin >> tempCelsius;
    
    // Conversion
    tempFahrenheit = (tempCelsius * 9.0/5.0) + 32;
    
    // Output
    cout << "Temperature in Fahrenheit: " << tempFahrenheit << endl;
    
    // Comparison
    if (tempCelsius > 30)
        cout << "It's hot outside!" << endl;
    else if (tempCelsius < 10)
        cout << "It's cold outside!" << endl;
    else
        cout << "The weather is moderate." << endl;
    
    return 0;
}
