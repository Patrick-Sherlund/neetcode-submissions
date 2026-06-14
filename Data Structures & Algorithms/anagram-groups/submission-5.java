class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String, ArrayList<String>> map = new HashMap<String, ArrayList<String>>();

        for(String str : strs) {
            char[] chars = str.toCharArray();
            Arrays.sort(chars);
            String sorted = new String(chars);

            ArrayList<String> foundArr = map.get(sorted);
            if(foundArr != null) {
                foundArr.add(str);
            } else {
                map.put(sorted, new ArrayList<String>(List.of(str)));
            }
        }

        List<List<String>> output = new ArrayList<List<String>>();
        for(ArrayList<String> arr : map.values()) {
            output.add(arr);
        }
        return output;
    }
}
