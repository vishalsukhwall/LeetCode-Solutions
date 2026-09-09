class Solution:
    def countCommas(self, n: int) -> int:
        count = 0
        base = 1_000

        while n >= base:
            count += n - base + 1
            base *= 1_000

        return count