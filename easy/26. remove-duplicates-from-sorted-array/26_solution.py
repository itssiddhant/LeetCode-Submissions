class Solution(object):
    def removeDuplicates(self, nums):
        nums[:len(nums)]=sorted(set(nums))
        for i in range(len(nums)):
            print(nums[i])
        