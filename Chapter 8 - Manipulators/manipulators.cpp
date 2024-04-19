#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 float PI = 3.14;
 int num = 100;
 cout << "Entering a new line." << endl;
 cout << setw(10) << "Output" << endl;
 cout << setprecision(10) << PI << endl;
 cout << setbase(16) << num << endl; //sets base to 16
}

// Explanation

/*
#include <iostream>
#include <iomanip>
using namespace std;

    - The #include <iostream> directive includes the input/output stream header file, allowing us to use input/output functionalities.
    - The #include <iomanip> directive includes the input/output manipulation header file, which provides facilities to manipulate input/output formatting.

int main() {

    - This is the entry point of the program. Execution of the program starts from here.

float PI = 3.14;
int num = 100;

    - Declares two variables PI and num.
    - PI is assigned the value 3.14 of type float.
    - num is assigned the value 100 of type int.

cout << "Entering a new line." << endl;
cout << setw(10) << "Output" << endl;
cout << setprecision(10) << PI << endl;
cout << setbase(16) << num << endl;

    - Outputs the string "Entering a new line." followed by a newline using cout.
    - Uses setw(10) to set the width of the output field to 10 characters. This affects the following output statement.
    - Outputs the string "Output" with a width of 10 characters.
    - Uses setprecision(10) to set the precision of floating-point output to 10 decimal places. This affects the following output statement.
    - Outputs the value of PI with a precision of 10 decimal places.
    - Uses setbase(16) to set the output base to hexadecimal (base 16). This affects the following output statement.
    - Outputs the value of num in hexadecimal format.

return 0;

    - Indicates that the main function has completed successfully and returns an exit status of 0 to the operating system.
*/