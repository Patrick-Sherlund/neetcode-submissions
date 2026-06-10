class Solution {
public:
    bool isSubsequence(string s, string t) {

        int start = 0;

        for(char c : s) {
            bool found = false;
            for(int i = start; i < t.size(); i++){
                if(t[i] == c) {
                    start = i + 1;
                    found = true;
                    break;
                }
            }
            if(!found) {
                return false;
            }
        }
        return true;
    }
};