class Solution:
    def findMaxAverage(self, nums: list[int], k: int) -> float:
        n = len(nums)
        maxavg = 0
        sum = 0

        for i in range(0 , k):
            sum += nums[i]
        
        maxavg = sum

        for i in range(k , n):
            sum = sum - nums[i-k] + nums[i]
            maxavg = max(maxavg , sum)


        return maxavg / k