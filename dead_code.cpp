#include <iostream>

int main() {
    int x = 5;
    int y = 10;

    if (x > y) {
        std::cout << "x is greater than y." << std::endl;
    } else {
        std::cout << "y is greater than x." << std::endl;
    }

    // Dead code starts here
    std::cout << "This line of code is unreachable." << std::endl;
    int z = x + y;
    std::cout << "The sum of x and y is: " << z << std::endl;
    // Dead code ends here

    return 0;
}
