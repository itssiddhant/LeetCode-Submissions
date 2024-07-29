// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a=set(nums)
        nums[:len(nums)]=sorted(a)
        for i in range(len(nums)):
            print(nums[i])
        