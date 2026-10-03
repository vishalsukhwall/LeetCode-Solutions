class Solution:
    def insert(self, nums: list[list[int]], add: list[int]) -> list[list[int]]:

        res = []
        n = len(nums)
        i = 0

        while i < n and nums[i][1] < add[0]:
            res.append(nums[i])
            i += 1

        while i < n and nums[i][0] <= add[1]:
            add[0] = min(nums[i][0] , add[0])
            add[1] = max(nums[i][1] , add[1])
            i += 1
        res.append(add)

        while i < n:
            res.append(nums[i])
            i += 1

        return res