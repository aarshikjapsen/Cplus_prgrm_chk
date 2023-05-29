#include <iostream>
#include <string>
#include <cstdlib>

void processUserInput(const std::string& userInput) {
    std::string command = "echo " + userInput;
    std::system(command.c_str());
}

int main() {
    std::cout << "Enter a string: ";
    std::string input;
    std::getline(std::cin, input);

    processUserInput(input);

    return 0;
}
