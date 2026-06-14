class Solution {
    public String longestCommonPrefix(String[] strs) {
        String output = "";
        String firstString = strs[0];

        for(int i = 0; i < firstString.length(); ++i) {
            for(int j = 1; j < strs.length; ++j) {
                if(strs[j].length() <= i || strs[j].charAt(i) != firstString.charAt(i)) {
                    return output;
                }
            }
            output += firstString.charAt(i);
        }
        return output;
    }
}