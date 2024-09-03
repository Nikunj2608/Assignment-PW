#include <iostream>
#include <vector>
#include <algorithm>

void backtrack(std::vector<int>& nums, std::vector<int>& subset, std::vector<std::vector<int>>& result, int start) {
    result.push_back(subset);

    for (int i = start; i < nums.size(); i++) {
        if (i > start && nums[i] == nums[i - 1]) {
            continue; 
            }
        subset.push_back(nums[i]);
        backtrack(nums, subset, result, i + 1);
        subset.pop_back();
    }
}

std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    std::vector<int> subset;
    std::sort(nums.begin(), nums.end()); 
    backtrack(nums, subset, result, 0);
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2};
    std::vector<std::vector<int>> result = subsets(nums);

    for (const auto& subset : result) {
        std::cout << "[";
        for (int i = 0; i < subset.size(); i++) {
            std::cout << subset[i];
            if (i < subset.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}