class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.strip()
        li = list(s.split(" "))
        return len(li[len(li) - 1])
        