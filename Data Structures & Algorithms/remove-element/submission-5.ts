class Solution {
    /**
     * @param {number[]} nums
     * @param {number} val
     * @return {number}
     */
    removeElement(nums: number[], val: number): number {
        let writeIndex: number = 0;
        for(let i: number = 0; i < nums.length; ++i) {
            if(nums[i] != val) {
                nums[writeIndex++] = nums[i];
            }
        }
        return writeIndex;
    }
}
