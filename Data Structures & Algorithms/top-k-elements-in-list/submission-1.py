class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        ans = []
        for x in nums:
            if x in count:
                count[x]+=1
            else:
                count[x] = 1
        for i in range(k):
            m = max(count, key=count.get)
            ans.append(m)
            del count[m]

        return ans