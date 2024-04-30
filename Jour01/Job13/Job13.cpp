#include <iostream>

int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    for (int i = 5; i < N+1; i++) {
        std::cout << i << "^3 = " << i*i*i << std::endl;
    }
}