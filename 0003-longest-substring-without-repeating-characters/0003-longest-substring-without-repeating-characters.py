class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        res = 0
        left = 0
        seen = set()

        for i in range(n):
            while s[i] in seen:
                seen.remove(s[left])
                left += 1
            seen.add(s[i])
            res = max(res , i-left+1)

        return res