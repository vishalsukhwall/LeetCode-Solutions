class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        s = set(nums)
        i = 1

        while True:
            x = k * i
            if x not in s:
                return x
            i += 1