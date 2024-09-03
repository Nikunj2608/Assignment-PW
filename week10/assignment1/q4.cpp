#include <vector>

int findDuplicate(std::vector<int>& nums) {
    int n = nums.size() - 1;
    int left = 1, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;
        int count = 0;

        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }

        if (count > mid) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 3, 4};
    int duplicate = findDuplicate(nums);
    return 0;
}