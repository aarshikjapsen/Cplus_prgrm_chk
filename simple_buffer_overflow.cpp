#include <iostream>
#include <cstring>

int main() {
    char buffer[10];
    char secret[] = "Secret Data";

    std::cout << "Enter a string: ";
    std::cin >> buffer;

    std::cout << "Input: " << buffer << std::endl;
    std::cout << "Secret: " << secret << std::endl;

    return 0;
}
