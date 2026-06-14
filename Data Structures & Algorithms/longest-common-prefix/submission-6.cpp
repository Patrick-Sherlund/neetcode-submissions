class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string outputStr = "";
        int currentIndex = 0;

        while(currentIndex < strs[0].size()) {
            for(int i = 1; i < strs.size(); ++i) {
                if(strs[0].size() <= currentIndex || strs[i][currentIndex] != strs[0][currentIndex]) {
                    return outputStr;
                }
            }
            outputStr.push_back(strs[0][currentIndex]);
            currentIndex++;
        }
        return outputStr;
    }
};