#include <iostream>
using namespace std;

int main() {
    float speed, time, distance;
    
    // Input
    cout << "Enter speed (in km/h): ";
    cin >> speed;
    cout << "Enter time travelled (in hours): ";
    cin >> time;
    
    // Calculation
    distance = speed * time;
    
    // Output
    cout << "Distance travelled: " << distance << " km" << endl;
    return 0;
}
