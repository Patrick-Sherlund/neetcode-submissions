class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        map = dict()

        for str in strs:
            sortedStr = "".join(sorted(str))
            foundList = map.get(sortedStr, None)
            if foundList is not None:
                foundList.append(str)
            else:
                map[sortedStr] = [str]
        output = []
        for strList in map.values():
            output.append(strList)
        return output


        