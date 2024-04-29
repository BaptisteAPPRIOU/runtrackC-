#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int x = 4;
    int y = 5;
    a = x+5;
    cout << a << endl;
    a = x=y +2;
    cout << a << endl;
    a = x == y;
    cout << a << endl;
    a = d++ * b+c;
    cout << a << endl;
}