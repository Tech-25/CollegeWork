
#include <iostream>

int FindNumberOfSuperiorElements(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool isSuperior = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isSuperior = false;
                break;
            }
        }
        if (isSuperior) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {7,9,5,2,8,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int superiorCount = FindNumberOfSuperiorElements(arr, n);

    std::cout << "Number of superior elements: " << superiorCount << std::endl;

    return 0;
}

