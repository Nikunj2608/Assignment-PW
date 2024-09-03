#include <iostream>
#include <vector>

int lastOccurrence(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            left = mid + 1; 
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 3, 4, 4 ,4, 5};
    int target = 4;

    int lastIdx = lastOccurrence(arr, target);

    if (lastIdx != -1) {
        std::cout << "Last occurrence of " << target << " is at index " << lastIdx << std::endl;
    } else {
        std::cout << target << " does not exist in the array." << std::endl;
    }

    return 0;
}