#include <iostream>

int countInversions(int arr[], int n) {
    int count = 0;
    for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
            if (arr[j] > arr[k] && j<k) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Number of inversions: " << countInversions(arr, n) << std::endl;
    return 0;
}