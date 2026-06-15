class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::queue<int> badIndexStack;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != val){
                if(!badIndexStack.empty()) {
                    nums[badIndexStack.front()] = nums[i];
                    badIndexStack.pop();
                    badIndexStack.push(i);
                }
            } else {
                badIndexStack.push(i);
                count++;
            }
        }
        return nums.size() - count;
    }
};