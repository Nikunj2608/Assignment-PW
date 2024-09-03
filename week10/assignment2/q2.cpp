#include <iostream>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1; 
}

int findElement(int arr[], int target) {
    int low = 0;
    int high = 1;

    while (arr[high] < target) {
        low = high;
        high = high * 2;
    }

    return binarySearch(arr, low, high, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21}; 
    int target = 13;

    int index = findElement(arr, target);

    if (index != -1) {
        std::cout << "Element found at index " << index << std::endl;
    }
    else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}