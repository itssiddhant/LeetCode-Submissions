// https://leetcode.com/problems/bitwise-and-of-numbers-range

class Solution(object):
    def rangeBitwiseAnd(self, left, right):
        while left<right:
            right &= right-1
        return right
