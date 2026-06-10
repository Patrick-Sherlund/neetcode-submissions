class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> contains = new HashSet<Integer>();

        for(int num : nums) {
            if(contains.contains(num)) {
                return true;
            }
            contains.add(num);
        }

        return false;
    }
}