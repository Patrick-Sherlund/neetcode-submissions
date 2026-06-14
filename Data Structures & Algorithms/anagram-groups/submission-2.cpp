using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_set<int> indexSet;

        for(int i = 0; i < strs.size(); ++i) {
            if(indexSet.find(i) != indexSet.end()) {
                continue;
            }
            output.push_back({strs[i]});
            indexSet.insert(i);
            for(int j = i+1; j < strs.size(); ++j) {
                if(isAnagram(strs[i], strs[j]) && indexSet.find(j) == indexSet.end()){
                    output[output.size() - 1].push_back(strs[j]);
                    indexSet.insert(j);
                }
            }
        }
        return output;
    }

    bool isAnagram(string n, string m) {
        int arr[26] = {0};

        if(n.size() != m.size()) {
            return false;
        }

        for(char c : n) {
            arr[c-'a']++;
        }

        for(char c : m) {
            arr[c-'a']--;

            if(arr[c-'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
