#include <algorithm> 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int smallest, largest = 0;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                if(i != j && (nums[i] + nums[j] == target)) {
                    smallest = std::min(i, j);
                    largest = std::max(i,j);
                    return {smallest, largest};
                }
            }
        }
        return {smallest, largest};
    }
};
