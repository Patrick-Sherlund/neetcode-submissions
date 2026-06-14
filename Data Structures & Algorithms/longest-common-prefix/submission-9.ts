class Solution {
    /**
     * @param {string[]} strs
     * @return {string}
     */
    longestCommonPrefix(strs: string[]): string {
        let output: string = "";
        let firstString: string = strs[0];

        for(let i = 0; i < firstString.length; ++i) {
            for(let j = 1; j < strs.length; ++j) {
                if(strs[j].length <= i || strs[j][i] != firstString[i]) {
                    return output;
                }
            }
            output += firstString[i];
        }
        return output;
    }
}
