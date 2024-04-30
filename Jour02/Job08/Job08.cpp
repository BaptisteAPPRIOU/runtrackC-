#include <iostream>

int main() {
    int a,b;
    std::cout << "Enter a number a: ";
    std::cin >> a;
    std::cout << "Enter a different number b: ";
    std::cin >> b;
    if (a > b)
    {
        int i = b;
        while (i < a+1)
        {
            std::cout << i << std::endl;
            i++;
        }
    }
    else if (a < b)
    {
        int i = a;
        while (i < b+1)
        {
            std::cout << i << std::endl;
            i++;
        }
    }
    else
    {
        std::cout << "a and b are equal." << std::endl;
    }
}