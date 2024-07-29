// https://leetcode.com/problems/reverse-integer

class Solution(object):
    def reverse(self,x):
        isNegative = False
        if x < 0:
            isNegative = True
            x = -x
        rev = 0
        while x:
            rev = rev * 10 + x % 10
            x //= 10
        if rev >= 2 ** 31 - 1 or rev <= -2 ** 31:
            return 0
        return -rev if isNegative else rev