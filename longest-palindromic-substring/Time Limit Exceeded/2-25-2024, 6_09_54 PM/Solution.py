// https://leetcode.com/problems/longest-palindromic-substring

class Solution(object):
    def longestPalindrome(self, s):
        n = len(s)
        index = -1
        maxlength = 0
        for i in range(n):
            for j in range(i, n):
                ispalindrome = 1
                for k in range(0, ((j - i) // 2) + 1):
                    if s[i + k] != s[j - k]:
                        ispalindrome = 0
                if ispalindrome != 0 and j - i + 1 > maxlength:
                    index = i
                    maxlength = j - i + 1
        return s[index:index + maxlength]
        