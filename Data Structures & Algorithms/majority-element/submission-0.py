from math import floor
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        c = Counter(nums)
        for x in c:
            if(c[x] > floor(len(nums)/2)):
                return x
    