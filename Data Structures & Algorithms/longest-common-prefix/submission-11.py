class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        output = ""
        firstString = strs[0]

        for i in range(len(strs[0])):
            for j in range(len(strs)):
                if len(strs[j]) <= i or strs[j][i] != firstString[i]:
                    return output
            output += firstString[i]
        return output