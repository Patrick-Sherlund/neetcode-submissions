class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int largestEl = -1;

        for(int i = 0; i < arr.size(); i++) {
            for(int j = i+1; j < arr.size(); j++) {
                if (arr[j] > largestEl) {
                    largestEl = arr[j];
                }
            }
            arr[i] = largestEl;
            largestEl = -1;
            
            if(arr.size() - 1 == i) {
                arr[i] = largestEl;
            }
        }
        return arr;
    }
};