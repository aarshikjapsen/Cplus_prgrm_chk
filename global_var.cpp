#include <iostream>

int globalVariable = 10;  // Global variable

void modifyGlobalVariable() {
    globalVariable = 20;  // Modify the value of the global variable
}

int main() {
    std::cout << "Initial value of globalVariable: " << globalVariable << std::endl;

    modifyGlobalVariable();  // Call the function to modify the global variable

    std::cout << "Modified value of globalVariable: " << globalVariable << std::endl;

    return 0;
}
