class Solution:
    def findClosestElements(self, nums: List[int], k: int, x: int) -> List[int]:

        l1 = []

        for i in range(0 , k):
            l1.append(nums[i])

        for i in range(k , len(nums)):

            if(abs(nums[i-k] - x) > abs(nums[i] - x)):
                l1.remove(nums[i-k])
                l1.append(nums[i])

        return l1

    

     
        