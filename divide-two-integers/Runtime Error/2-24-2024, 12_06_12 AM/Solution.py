// https://leetcode.com/problems/divide-two-integers

class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """

        if (-(2**31)<divisor<2**31 and -(2**31)<dividend<2**31):
            if (divisor <0):
                return -(dividend//(-(divisor)))
            elif (dividend<0):
                return -((-(dividend))//divisor)
            return dividend//divisor
        elif (dividend//divisor>((2**31)-1)):
            return (2**31)-1
        elif (dividend//divisor<(-(2**31))):
            return (-(2**31))
            