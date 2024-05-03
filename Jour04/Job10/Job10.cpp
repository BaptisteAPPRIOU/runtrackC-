#include <iostream>
#include <string>

struct Note {
    std::string nom;
    std::string prenom;
    float note;
};

int main() {
    bool running = true;
    Note* notes = nullptr;
    int size = 0;

    do {
        std::cout << "\nMenu :" << std::endl;
        std::cout << "1. Ajouter une note" << std::endl;
        std::cout << "2. Afficher la liste de note" << std::endl;
        std::cout << "3. Supprimer une note d'un étudiant" << std::endl;
        std::cout << "4. Afficher la moyenne des notes" << std::endl;
        std::cout << "5. Quitter" << std::endl;
        std::cout << "Votre choix : ";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Note* newNotes = new Note[size + 1];
                for (int i = 0; i < size; i++) {
                    newNotes[i] = notes[i];
                }
                delete[] notes;
                notes = newNotes;
                std::cout << "\nEntrez le nom de l'étudiant : ";
                std::cin >> notes[size].nom;
                std::cout << "Entrez le prénom de l'étudiant : ";
                std::cin >> notes[size].prenom;
                std::cout << "Entrez la note de l'étudiant : ";
                std::cin >> notes[size].note;
                size++;
                break;
            }
            case 2: {
                for (int i = 0; i < size; i++) {
                    std::cout << "\nNom : " << notes[i].nom << std::endl;
                    std::cout << "Prénom : " << notes[i].prenom << std::endl;
                    std::cout << "Note : " << notes[i].note << std::endl;
                }
                break;
            }
            case 3: {
                std::string nom;
                std::string prenom;
                std::cout << "\nEntrez le nom de l'étudiant : ";
                std::cin >> nom;
                std::cout << "Entrez le prénom de l'étudiant : ";
                std::cin >> prenom;
                Note* newNotes = new Note[size - 1];
                int j = 0;
                int cpt = 0;
                for (int i = 0; i < size; i++) {
                    if (notes[i].nom != nom || notes[i].prenom != prenom) {
                        newNotes[j] = notes[i];
                        j++;
                    }
                    else {
                        cpt++;
                    }
                }
                delete[] notes;
                notes = newNotes;
                size -= cpt;
                break;
            }
            case 4: {
                float sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += notes[i].note;
                }
                std::cout << "\nLa moyenne des notes est : " << sum / size << std::endl;
                break;
            }
            case 5: {
                running = false;
                break;
            }
            default: {
                std::cout << "\nChoix invalide" << std::endl;
                break;
            }
        }
    } while (running);

    delete[] notes;
    return 0;
}