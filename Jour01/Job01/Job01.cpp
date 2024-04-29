#include <iostream>

int main() {
    char c = '\x01';            // 16进制
    short int p = 10;           // 10进制
    int x = p + 3;                  // 13
    int y = c + 1;                  // 4
    int z = p + c;                  // 11
    int w = 3 * p + 5 * c;          // 35
}