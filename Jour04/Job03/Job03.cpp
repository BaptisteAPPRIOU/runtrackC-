#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    for (auto it = str.rbegin(); it != str.rend(); ++it) {
        std::cout << *it;
    }
    return 0;
}