#include <iostream>
using namespace std; // Use namespace globally

int globalVar = 100; // Global variable

int main() {
    int localVar = 50; // Local variable

    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;

    return 0;
}

// Explanation:

/*
#include <iostream>: This directive includes the input-output stream header file, allowing us to use input-output functionalities.

using namespace std;: This directive brings the entire std namespace into the current scope. It's placed at the beginning of the file outside of any function, making it apply globally.

int globalVar = 100;: This declares a global variable named globalVar of type int and initializes it with the value 100. Global variables are accessible throughout the entire program.

int main() { ... }: This is the main function, where the program execution starts.

int localVar = 50;: This declares a local variable named localVar of type int within the main() function and initializes it with the value 50. Local variables are accessible only within the block or function they are declared in.

cout << "Local variable: " << localVar << endl;: This line prints the value of the local variable localVar to the standard output stream using cout.

cout << "Global variable: " << globalVar << endl;: This line prints the value of the global variable globalVar to the standard output stream using cout.
*/