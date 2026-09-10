class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i , j = 0 , len(nums)-1
        l = []

        while i <= j:
            sum = nums[i] + nums[j]
            if sum == target:
                l.append(i+1)
                l.append(j+1)
                return l
            elif sum > target:
                j -= 1
            else:
                i += 1

        return -1