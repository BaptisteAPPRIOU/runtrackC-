#include <iostream>

void mergeArrays(const int Tab1[], int size1, const int Tab2[], int size2, int Tab_final[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (Tab1[i] < Tab2[j]) {
            Tab_final[k] = Tab1[i];
            i++;
        } else {
            Tab_final[k] = Tab2[j];
            j++;
        }
        k++;
    }
    while (i < size1) {
        Tab_final[k] = Tab1[i];
        i++;
        k++;
    }
    while (j < size2) {
        Tab_final[k] = Tab2[j];
        j++;
        k++;
    }
}

int main() {
    int Tab1[] = {1, 3, 5, 5, 6, 7, 9, 11, 13};
    int Tab2[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int Tab_final[17];
    mergeArrays(Tab1, 9, Tab2, 8, Tab_final);
    std::cout << "Merged Array: ";
    for (int i = 0; i < 17; i++) {
        std::cout << Tab_final[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}