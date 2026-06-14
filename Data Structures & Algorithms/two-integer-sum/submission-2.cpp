class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); ++i) {
            if(hashMap.contains(target - nums[i]) ) {
                auto it = hashMap.find(target - nums[i]);
                if(it != hashMap.end() && it->second != i) {
                    return {
                        std::min(it->second, i),
                        std::max(it->second, i)
                    };
                }
            }
            hashMap[nums[i]] = i;
        }
        return {0,0};
    }
};
