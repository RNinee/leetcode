class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        dic = {}

        for i in nums:
            dic[i] = dic.get(i, 0) + 1
            if dic[i] > 1:
                return i
        