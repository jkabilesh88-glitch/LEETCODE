#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; // value -> index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if complement already exists in map
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            
            // Store current number with its index
            numMap[nums[i]] = i;
        }
        
        return {};
    }
};