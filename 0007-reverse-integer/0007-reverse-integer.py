class Solution:
    def reverse(self, x: int) -> int:
        num = 0
        sign = -1 if x < 0 else 1
        
        x = abs(x)

        while x > 0:
            rem = x % 10

            num = num * 10 + rem

            x = x//10

        num *= sign

        if num < -(2**31) or (2**31-1) < num:
            return 0

        return num



        
        