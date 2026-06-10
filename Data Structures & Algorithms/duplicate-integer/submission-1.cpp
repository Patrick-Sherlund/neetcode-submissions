class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> numSet;

        for(int i = 0; i < nums.size(); i++) {
            if(numSet.find(nums[i]) != numSet.end()) {
                return true;
            }
            numSet.emplace(nums[i]);
        }
        return false;
    }
};