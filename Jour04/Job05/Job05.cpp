#include <iostream>

struct Point{
    int x;
    int y;
};

int main() {
    Point p = {15, 20};
    Point* pointer = &p;
    std::cout << "La valeur de 'p.x' est : " << pointer->x << std::endl;
    std::cout << "La valeur de 'p.y' est : " << pointer->y << std::endl;
    *pointer = {30, 40};
    std::cout << "La nouvelle valeur de 'p.x' est : " << pointer->x << std::endl;
    std::cout << "La nouvelle valeur de 'p.y' est : " << pointer->y << std::endl;
}