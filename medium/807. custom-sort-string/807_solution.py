class Solution(object):
    def customSortString(self, order, s):
        def custom_key(char):
            if char in order:
                return order.index(char)
            else:
                return float('inf')
        sorted_s = sorted(s, key=custom_key)
        return ''.join(sorted_s)