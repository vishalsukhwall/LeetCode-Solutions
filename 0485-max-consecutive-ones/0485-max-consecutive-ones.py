class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxCount = 0
        currCount = 0

        for i in nums:
            if i == 1:
                currCount += 1
                maxCount = max(currCount , maxCount)
            else:
                currCount = 0
        
        return maxCount