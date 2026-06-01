class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        swap_val = 0
        for i in range(0,len(nums)-1):
            for j in range(i+1, len(nums)):
                if(nums[i]>nums[j]):
                    swap_val = nums[j]
                    nums[j] = nums[i]
                    nums[i] = swap_val
                