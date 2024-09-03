#include <iostream>

int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    
    int minRest = findMin(arr + 1, size - 1);
    
    if (arr[0] < minRest) {
        return arr[0];
    } else {
        return minRest;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int minElement = findMin(arr, size);
    
    std::cout << "The minimum element is: " << minElement << std::endl;
    
    return 0;
}