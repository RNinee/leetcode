class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        dic = {}
        current = 0
        answer = []

        if len(nums) < k:
            return [max(nums)]

        for i in range(k ):
            dic[nums[i]] = dic.get(nums[i], 0) + 1
        
        # print(f"sum dic val is {sum(dic.values())}")

        while current < len(nums) - k + 1:
            # print("=============new==============")
            # for key, value in dic.items():
                # print(f"key: {key}, value {value}")

            answer.append(max(dic))
            dic[nums[current]] = dic[nums[current]] - 1
            if dic[nums[current]] == 0:
                del dic[nums[current]]
            
            if current + k <= len(nums) - 1:
                # print(f"insterting {nums[current + k]}")
                dic[nums[current + k]] = dic.get(nums[current + k], 0) + 1

            current += 1
            






        return answer

        

