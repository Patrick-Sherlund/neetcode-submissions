class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> numSet;

        for(int num : nums) {
            if(numSet.count(num)) {
                return true;
            }
            numSet.insert(num);
        }

        return false;
    }
};