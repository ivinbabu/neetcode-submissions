class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = math.floor(len(nums)/3)
        mp={}
        ans = []
        for x in nums:
            if x not in ans:
                mp[x] = 1 + mp.get(x,0)
                if mp[x] > n:
                    ans.append(x)
        return ans