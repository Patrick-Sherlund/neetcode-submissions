class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writeIndex = 0;

        for(int readIndex = 0; readIndex < nums.size(); readIndex++) {
            if(val != nums[readIndex]) {
                nums[writeIndex++] = nums[readIndex];
            }
        }
        return writeIndex;
    }
};