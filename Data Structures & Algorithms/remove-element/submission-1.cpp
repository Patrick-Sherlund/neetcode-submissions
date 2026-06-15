class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::queue<int> badIndexQueue;
        int count = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != val){
                if(!badIndexQueue.empty()) {
                    nums[badIndexQueue.front()] = nums[i];
                    badIndexQueue.pop();
                    badIndexQueue.push(i);
                }
            } else {
                badIndexQueue.push(i);
                count++;
            }
        }
        return nums.size() - count;
    }
};