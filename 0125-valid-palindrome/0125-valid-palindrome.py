class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        palindrome = []
        for letter in s:
            if letter.isalnum():
                palindrome.append(letter)
        palindrome = "".join(palindrome)
        return palindrome[::-1] == palindrome