#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {10, 8, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}