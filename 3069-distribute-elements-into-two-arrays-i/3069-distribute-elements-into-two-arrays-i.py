class Solution:
    def resultArray(self, nums: List[int]) -> List[int]:
        arr1 = [nums[0]]
        arr2 = [nums[1]]

        for val in nums[2:]:
            if arr1[-1] > arr2[-1]:
                arr1.append(val)
            else:
                arr2.append(val)
        
        return arr1 + arr2