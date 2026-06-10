class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int numsSize = nums.size();
        vector<int> ans(numsSize * 2);

        for(int i = 0; i < nums.size(); ++i) {
            ans[i] = nums[i];
            ans[numsSize + i] = nums[i];
        }

        return ans;

    }
};