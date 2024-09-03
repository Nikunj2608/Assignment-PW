#include <vector>
#include <unordered_set>
#include <iostream> 
std::vector<int> findErrorNums(std::vector<int>& nums) {
    std::vector<int> result(2);
    std::unordered_set<int> numSet;
    int duplicate = -1;
    
    for (int num : nums) {
        if (numSet.count(num) == 0) {
            numSet.insert(num);
        } else {
            duplicate = num;
        }
    }
    
    for (int i = 1; i <= nums.size(); i++) {
        if (numSet.count(i) == 0) {
            result[1] = i;
            break;
        }
    }
    
    result[0] = duplicate;
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 2, 4}; 
    std::vector<int> result = findErrorNums(nums);
    
    std::cout << "Duplicate number: " << result[0] << std::endl;
    std::cout << "Missing number: " << result[1] << std::endl;
    
    return 0;
}