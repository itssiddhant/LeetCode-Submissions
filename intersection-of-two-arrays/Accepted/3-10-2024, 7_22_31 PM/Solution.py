// https://leetcode.com/problems/intersection-of-two-arrays

class Solution(object):
    def intersection(self, nums1, nums2):
        l=[]
        for i in range(len(nums1)):
            for j in range(len(nums2)):
                if (nums1[i]==nums2[j]):
                    l.append(nums1[i])
        return list(set(l))