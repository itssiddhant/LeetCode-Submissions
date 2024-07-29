// https://leetcode.com/problems/divide-two-integers

class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        result = 0
        sign = -1 if (dividend < 0) ^ (divisor < 0) else 1 
        dividend, divisor = abs(dividend), abs(divisor)

        while dividend >= divisor:
            dividend -= divisor
            result += 1
        result *= sign
        if result > (2**31) - 1:
            return (2**31) - 1
        elif result < -2**31:
            return -2**31
        else:
            return result
