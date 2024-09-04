class Solution(object):
    def isPalindrome(self, x):
        stri=str(x)
        rev=stri[::-1]
        if stri==rev:
            return True
        else:
            return False


        