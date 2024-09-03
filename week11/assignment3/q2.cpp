#include <iostream>

int calculateSum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    
    return arr[0] + calculateSum(arr + 1, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int sum = calculateSum(arr, size);
    
    std::cout << "Sum of array elements: " << sum << std::endl;
    
    return 0;
}