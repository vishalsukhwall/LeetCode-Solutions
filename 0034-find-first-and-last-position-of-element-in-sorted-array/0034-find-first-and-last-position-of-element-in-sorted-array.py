class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        n = len(nums)
        l1 = [-1 , -1]
        st = 0
        end = n-1

        while st <= end:
            mid = (st + end) // 2

            if nums[mid] == target:
                l1[0] = mid
                end = mid - 1
            elif nums[mid] > target:
                end = mid - 1
            else:
                st = mid + 1

        st = 0 
        end = n-1
        while st <= end:
            mid = (st + end) // 2

            if nums[mid] == target:
                l1[1] = mid
                st = mid + 1
            elif nums[mid] > target:
                end = mid - 1
            else:
                st = mid + 1
        
        return l1