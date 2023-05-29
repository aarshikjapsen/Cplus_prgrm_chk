#include <iostream>

int main() {
    int* ptr = new int;  // Dynamically allocate memory

    *ptr = 10;  // Store a value in the allocated memory

    delete ptr;  // Deallocate the memory

    // The pointer 'ptr' is now a dangling pointer

    // Attempting to dereference the dangling pointer can lead to undefined behavior
    std::cout << "Value: " << *ptr << std::endl;  // Potential error: dereferencing a dangling pointer

    return 0;
}
