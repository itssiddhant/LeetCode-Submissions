// https://leetcode.com/problems/search-in-rotated-sorted-array

int search(int* nums, int numsSize, int target) {
    for (int i=0; i<numsSize;i++){
        if (target==nums[i]){
            return i;
        }
    }
    return -1;
}