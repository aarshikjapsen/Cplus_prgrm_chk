#include <iostream>
#include <fstream>

void writeToFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        // Error: Failed to open the file for writing
        return;
    }

    file << content;
    file.close();
}

int main() {
    std::string filename = "example.txt";
    std::string content = "Hello, world!";

    writeToFile(filename, content);

    return 0;
}
