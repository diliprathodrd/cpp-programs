#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int birthYear, currentYear;
    
    // Input
    cout << "Enter birth year: ";
    cin >> birthYear;
    
    // Get current year
    time_t now = time(0);
    tm* ltm = localtime(&now);
    currentYear = 1900 + ltm->tm_year;
    
    // Calculation
    int age = currentYear - birthYear;
    
    // Output
    cout << "Age: " << age << " years" << endl;
    return 0;
}
