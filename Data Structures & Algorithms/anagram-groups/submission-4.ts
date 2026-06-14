class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs: string[]): string[][] {
        const map = new Map<string, string[]>();

        for(const str of strs) {
            const sorted: string = str.split("").sort().join("");
            if(map.has(sorted)) {
                map.get(sorted).push(str);
            } else {
                map.set(sorted, [str]);
            }
        }

        const output: string[][] = [];
        for(const strArr of map.values()) {
            output.push(strArr);
        }
        return output;
    }
}
