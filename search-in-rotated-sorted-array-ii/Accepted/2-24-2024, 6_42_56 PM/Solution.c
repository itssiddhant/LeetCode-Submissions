// https://leetcode.com/problems/search-in-rotated-sorted-array-ii

bool search(int* nums, int numsSize, int target) {
        for (int i=0; i<numsSize;i++){
        if (target==nums[i]) return true;
    }
    return false;
}