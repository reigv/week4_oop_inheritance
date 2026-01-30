#include <iostream>

int main() {
    const int x = 42; // Declare a constant integer
    std::cout << "The value of x is: " << x << std::endl;

    // Uncommenting the next line will cause a compilation error
    // x = 100; // Error: assignment of read-only variable 'x'

    // i++;
    return 0;
}