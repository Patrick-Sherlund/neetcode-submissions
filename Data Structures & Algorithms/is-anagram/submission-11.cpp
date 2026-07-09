#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<int, int> strMap;
        if (s.size() != t.size()) {
            return false;
        }

        for(int i = 0; i < s.size(); i++) {
            strMap[s[i] - 'a']++;
        }
        for(int i = 0; i < t.size(); i++) {
            strMap[t[i] - 'a']--;

            if(strMap[t[i] - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }

};
