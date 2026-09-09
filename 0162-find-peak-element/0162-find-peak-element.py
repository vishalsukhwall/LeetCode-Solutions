class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        left , right = 1 , len(nums) - 2
        n =  len(nums)

        if n == 1:
            return 0

        if nums[0] > nums[1]:
            return 0

        if nums[n-1] > nums[n-2]:
            return n-1

        while left <= right:
            mid = (left + right)//2

            if (nums[mid] > nums[mid-1] and nums[mid] > nums[mid+1]):
                return mid
            elif nums[mid] < nums[mid-1]:
                right = mid - 1
            else:
                left = mid + 1

        return -1