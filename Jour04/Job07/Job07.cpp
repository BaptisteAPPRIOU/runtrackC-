#include <iostream>
using namespace std;

int Tab[] = {4, 23, 353, 44, 5243};

int main(){
    int* ptr = Tab;
    for (int i = 0; i < 5; i++){
        cout << "L'adresse de l'élément " << Tab[i] << " est " << ptr + i << endl;
    }
}