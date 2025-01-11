#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Map to store numbers and their indices

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Calculate the complement
        if (numMap.find(complement) != numMap.end()) {
            // If complement is found in the map, return the indices
            return {numMap[complement], i};
        }
        // Store the current number and its index in the map
        numMap[nums[i]] = i;
    }

    // Return an empty vector if no solution is found (should not happen as per problem constraints)
    return {};
}

int main() {
    // Example 1
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);
    std::cout << "Example 1 Output: [" << result1[0] << ", " << result1[1] << "]\n";

    // Example 2
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);
    std::cout << "Example 2 Output: [" << result2[0] << ", " << result2[1] << "]\n";

    // Example 3
    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);
    std::cout << "Example 3 Output: [" << result3[0] << ", " << result3[1] << "]\n";

    return 0;
}
