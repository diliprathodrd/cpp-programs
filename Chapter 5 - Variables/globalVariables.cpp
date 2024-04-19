#include <iostream>
using namespace std; // Use namespace globally

int globalVar = 100; // Global variable

void printGlobal() {
    cout << "Global variable inside function: " << globalVar << endl;
}

int main() {
    cout << "Global variable in main: " << globalVar << endl;
    printGlobal();

    return 0;
}


// Explanation

/*
#include <iostream> and using namespace std;: These are the same as in the previous example.

int globalVar = 100;: This declares a global variable named globalVar of type int and initializes it with the value 100.

void printGlobal() { ... }: This is a function named printGlobal(). It doesn't take any arguments and doesn't return any value (void), but it prints the value of the global variable globalVar.

int main() { ... }: This is the main function, where the program execution starts.

cout << "Global variable in main: " << globalVar << endl;: This line prints the value of the global variable globalVar in the main() function.

printGlobal();: This line calls the printGlobal() function, which prints the value of the global variable globalVar inside the function.
*/