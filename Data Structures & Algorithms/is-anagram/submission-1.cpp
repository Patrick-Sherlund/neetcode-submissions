using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> characters;

        for(char c : s) {
            characters[c]++;
        }

        for(char c : t) {
            characters[c]--;

            if(characters[c] < 0) {
                return false;
            }
        }

        return true;
    }
};
