#include <iostream>

int main() {
    int i,n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (i=0; i<n+1; i++)
    {
        if (i%3 == 0 && i%5 == 0)
        {
            std::cout << i << " est un multiple de 3 et de 5" << std::endl;
        }
        else if (i%3 == 0)
        {
            std::cout << i << " est un multiple de 3" << std::endl;
        }
        else if (i%5 == 0)
        {
            std::cout << i << " est un multiple de 5" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
}