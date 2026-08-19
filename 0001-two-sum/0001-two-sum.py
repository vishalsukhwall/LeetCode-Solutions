class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = {}

        for i in range(len(nums)):
            a = target - nums[i]

            if a in mp:
                return [mp[a] , i]
        
            mp[nums[i]] = i

        return [-1 ,-1]