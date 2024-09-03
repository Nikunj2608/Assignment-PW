#include <iostream>
#include <vector>
#include <algorithm>

int minOperationsToSort(std::vector<int>& arr) {
    std::vector<int> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end());

    int operations = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != sortedArr[i]) {
            operations++;
            int target = arr[i];
            for (int j = i; j < arr.size(); j++) {
                if (arr[j] == target) {
                    arr[j] = 0;
                }
            }
        }
    }

    return operations;
}

int main() {
    std::vector<int> arr = {5, 2, 8, 2, 5, 9, 1, 3};
    int minOperations = minOperationsToSort(arr);
    std::cout << "Minimum operations required to sort the array: " << minOperations << std::endl;

    return 0;
}