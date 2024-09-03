#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int>& nums, int left, int mid, int right) {
    int count = 0;
    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if ((long long)nums[i] > 2 * (long long)nums[j]) {
            count += mid - i + 1;
            j++;
        } else {
            i++;
        }
    }

    vector<int> sorted(right - left + 1);
    int p = left;
    int q = mid + 1;
    int k = 0;

    while (p <= mid && q <= right) {
        if (nums[p] <= nums[q]) {
            sorted[k++] = nums[p++];
        } else {
            sorted[k++] = nums[q++];
        }
    }

    while (p <= mid) {
        sorted[k++] = nums[p++];
    }

    while (q <= right) {
        sorted[k++] = nums[q++];
    }

    for (int i = left; i <= right; i++) {
        nums[i] = sorted[i - left];
    }

    return count;
}

int mergeSort(vector<int>& nums, int left, int right) {
    if (left >= right) {
        return 0;
    }

    int mid = left + (right - left) / 2;
    int count = mergeSort(nums, left, mid) + mergeSort(nums, mid + 1, right) + merge(nums, left, mid, right);

    return count;
}

int reversePairs(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size() - 1);
}

int main() {
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << reversePairs(nums) << endl;

    return 0;
}