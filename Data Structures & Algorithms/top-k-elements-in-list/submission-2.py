class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        ans = []
        for n in nums:
            count[n] = 1 + count.get(n, 0)
        for i in range(k):
            m = max(count, key=count.get)
            ans.append(m)
            del count[m]

        return ans