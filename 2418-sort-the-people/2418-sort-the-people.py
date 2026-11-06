class Solution:
    def sortPeople(self, names: list[str], heights: list[int]) -> list[str]:
        return [names[i] for i in sorted(range(len(heights)) , key = lambda i : -heights[i])]