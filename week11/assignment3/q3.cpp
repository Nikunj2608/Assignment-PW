#include <iostream>

int findIndex(int arr[], int size, int element, int index = 0) {
    if (index == size) {
        return -1;
    }
    
    if (arr[index] == element) {
        return index;
    }
    
    return findIndex(arr, size, element, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;
    
    int index = findIndex(arr, size, element);
    
    if (index != -1) {
        std::cout << "Element found at index: " << index << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }
    
    return 0;
}