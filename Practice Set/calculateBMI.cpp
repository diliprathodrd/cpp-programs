#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    
    // Input
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    
    // Calculation
    bmi = weight / (height * height);
    
    // Output
    cout << "BMI: " << bmi << endl;
    
    // Interpretation
    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal weight" << endl;
    else if (bmi < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obesity" << endl;
    
    return 0;
}
