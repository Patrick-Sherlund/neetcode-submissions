class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n =  arr.size();
        std::vector<int> newArr(n);
        int rightMax = -1;

        for(int i = n - 1; i >= 0; --i) {
            newArr[i] = rightMax;
            rightMax = std::max(rightMax, arr[i]);
        }
        return newArr;
    }
};