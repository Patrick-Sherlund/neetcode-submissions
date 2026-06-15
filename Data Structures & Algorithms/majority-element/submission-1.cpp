class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> majorityMap;
        double majorityNumber = ceil(nums.size()/2);

        for(int i = 0; i < nums.size(); ++i) {
            const auto& it = majorityMap.find(nums[i]);
            if(it != majorityMap.end()) {
                majorityMap[nums[i]]++;
            } else {
                majorityMap[nums[i]] = 0;
            }
            if(majorityMap[nums[i]] >= majorityNumber) {
                    return nums[i];
                }
        }
        return 0;
    }
};