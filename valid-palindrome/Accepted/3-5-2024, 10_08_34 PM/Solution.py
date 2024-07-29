// https://leetcode.com/problems/valid-palindrome

class Solution:
  def isPalindrome(self, s):
    k = 0
    j = len(s) - 1
    while k < j:
      while k < j and not s[k].isalnum():
        k += 1
      while k < j and not s[j].isalnum():
        j -= 1
      if s[k].lower() != s[j].lower():
        return False
      k += 1
      j -= 1
    return True