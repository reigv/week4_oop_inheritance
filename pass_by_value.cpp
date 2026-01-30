#include <iostream>

void func(int i) { i = 10; }

int main() {
    int i = 9;
    func(i);

    std::cout << i << std::endl; // Outputs: 9
    return 0;
}