#include <iostream>
#include <iomanip>
// These directives include the necessary header files for input/output operations and input/output manipulations.

using namespace std;

int main() {
    float num = 3.14159;
    // Declares a variable num of type float and initializes it with the value 3.14159.

    cout << "Default formatting: " << num << endl;
    // Prints the value of num using the default formatting. By default, floating-point numbers are printed with 6 digits after the decimal point.

    cout << "Fixed-point formatting: " << fixed << num << endl;
    /*
    - Sets the output format to fixed-point notation using the fixed manipulator.
    - Prints the value of num in fixed-point notation. In fixed-point notation, the number of digits after the decimal point is determined by the precision specified.
    */

    cout << "Scientific notation: " << scientific << num << endl;
    /*
    - Sets the output format to scientific notation using the scientific manipulator.
    - Prints the value of num in scientific notation.
    */

    cout << "Set precision: " << setprecision(3) << num << endl;
    /*
    - Sets the precision of floating-point output to 3 decimal places using the setprecision manipulator.
    - Prints the value of num with a precision of 3 decimal places.
    */
    
    return 0;
}