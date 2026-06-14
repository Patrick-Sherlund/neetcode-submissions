#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> mp;

        for(const string str : strs) {
            string sorted = str;
            std::sort(sorted.begin(), sorted.end());
            const auto& it = mp.find(sorted);
            if(it != mp.end()){
                it->second.push_back(str);
            } else {
                mp[sorted].push_back({str});
            }
        }
        std::vector<std::vector<string>> output;
        for(const auto& it : mp) {
            output.push_back(it.second);
        }
        return output;
    }
};
