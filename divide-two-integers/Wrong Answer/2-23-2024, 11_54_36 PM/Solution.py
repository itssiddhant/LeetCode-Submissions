// https://leetcode.com/problems/divide-two-integers

class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        if (divisor <0):
            return -(dividend//(-(divisor)))
        elif (dividend<0):
            return -((-(dividend))//divisor)
        return dividend//divisor
        