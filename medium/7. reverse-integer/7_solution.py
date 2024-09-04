class Solution(object):
    def reverse(self,x):
        rev=0
        sign = -1 if x<0 else 1
        x= abs(x)
        while x!=0:
            rev = rev * 10 + x % 10
            x //= 10
        res= sign*rev
        if res > 2 ** 31 - 1 or res < -2 ** 31:
            return 0
        return res