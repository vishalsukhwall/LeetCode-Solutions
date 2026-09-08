class Solution:
    def longestPalindrome(self, s: str) -> int:
        counts = Counter(s)
        leng = 0
        has_odd = False

        for count in counts.values():
            if count % 2 == 0:
                leng += count
            else:
                leng += count - 1
                has_odd = True

        if has_odd:
            leng += 1


        return leng