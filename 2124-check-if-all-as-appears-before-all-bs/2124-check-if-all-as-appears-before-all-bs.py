class Solution:
    def checkString(self, s: str) -> bool:
        seen = False

        for i in s:
            if i == 'b':
                seen = True
            elif i == 'a' and seen:
                return False

        return True