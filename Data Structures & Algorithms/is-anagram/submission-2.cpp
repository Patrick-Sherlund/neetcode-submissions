#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        vector<int> charList(26, 0);

        for(char c : s) {
            charList[c - 'a']++;
        }

        for(char c : t) {
            charList[c - 'a']--;
            if(charList[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
