#include <iostream>

void displayMiddleRowAndColumn(int arr[][3], int size) {
    int middle = size / 2;

     std::cout << "Middle Row: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[middle][i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Middle Column: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i][middle] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;

    displayMiddleRowAndColumn(arr, size);

    return 0;
}