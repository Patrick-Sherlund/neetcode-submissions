class Solution {
public:
    bool isAnagram(string s, string t) {        
        if(s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> charMap;

        for(char c : s) {
            charMap[c]++;
        }
        for(char c : t) {
            charMap[c]--;
        }

        for(auto& pair : charMap) {
            if(pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};
