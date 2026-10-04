class Solution:
    def minRotations(self, s: str) -> int:
        n = len(s)

        current = 0
        count = 0

        for i in s:
            target = int(i)

            diff = abs(current - target)
            anti_diff = 10 - diff

            count += min(diff , anti_diff)
            current = target

        return count
