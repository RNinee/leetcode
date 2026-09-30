class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        lis = []

        for i in nums:
            if i in lis:
                return i
            else:
                lis.append(i)
        