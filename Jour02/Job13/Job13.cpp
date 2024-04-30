#include <iostream>

int main() {
    int i,j;
    int tab[12][12];
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            tab[i+1][j+1] = i*j;
        }
    }
    for (i = 1; i <= 12; i++) {
        for (j = 1; j <= 12; j++) {
            if (i == 1) {
                if (j == 1) {
                    std::cout << "   ";
                } else if (j == 2) {
                    std::cout << "| ";
                } else {
                    std::cout << j-2 << " ";
                    if (j-2 < 12) {
                        std::cout << " ";
                    }
                }
            } else if (j == 1) {
                if (i == 1) {
                    std::cout << "   ";
                } else if (i == 2) {
                    std::cout << "-- ";
                } else {
                    std::cout << i-2 << " ";
                    if (i-2 < 10) {
                        std::cout << " ";
                    }
                }
            } else if (i == 2) {
                std::cout << "-- ";
            } else if (j == 2) {
                std::cout << "| ";
            } else {
                std::cout << tab[i-1][j-1] << " ";
                if (tab[i-1][j-1] < 10) {
                    std::cout << " ";
                }
            }
        }
        std::cout << std::endl;
    }
}