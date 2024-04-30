#include <iostream>

int main() {
    int a,b;
    std::cout << "Enter a number a: ";
    std::cin >> a;
    std::cout << "Enter a different number b: ";
    std::cin >> b;
    if (a > b)
    {
        for (int i = b; i < a+1; i++)
        {
            std::cout << i << std::endl;
        }
    }
    else if (a < b)
    {
        for (int i = a; i < b+1; i++)
        {
            std::cout << i << std::endl;
        }
    }
    else
    {
        std::cout << "a and b are equal." << std::endl;
    }
}