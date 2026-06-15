class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        writeIndex = 0
        for num in nums:
            if num != val:
                nums[writeIndex] = num
                writeIndex += 1
        return writeIndex