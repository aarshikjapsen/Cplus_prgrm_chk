#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};

    std::cout << arr[0] << std::endl;  // Valid: accessing the first element
    std::cout << arr[1] << std::endl;  // Valid: accessing the second element
    std::cout << arr[2] << std::endl;  // Valid: accessing the third element

    std::cout << arr[3] << std::endl;  // Out-of-bounds: accessing beyond the valid index range

    return 0;
}
