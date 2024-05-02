#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, str);
    std::string str2 = "Bonjour";
    std::sort(str.begin(), str.end());
    std::sort(str2.begin(), str2.end());
    std::cout << "Chaine 1 trie : " << str << std::endl;
    std::cout << "Chaine 2 trie : " << str2 << std::endl;
    return 0;
}