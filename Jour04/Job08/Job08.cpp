#include <iostream>
#include <string>

struct Node {
    int year;
    std::string school;
    float pi;
    std::string name;
};

int main() {
    Node data = {2023, "La Plateforme", 3.14, "Etudiants"};
    Node* pointer = &data;
    std::cout << "L'année est : " << pointer->year << " à l'adresse suivante : " << &pointer->year << std::endl;
    std::cout << "L'école est : " << pointer->school << " à l'adresse suivante : " << &pointer->school << std::endl;
    std::cout << "La valeur de 'pi' est : " << pointer->pi << " à l'adresse suivante : " << &pointer->pi << std::endl;
    std::cout << "Le nom est : " << pointer->name << " à l'adresse suivante : " << &pointer->name << std::endl;
}
