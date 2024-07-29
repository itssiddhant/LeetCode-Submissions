// https://leetcode.com/problems/kth-largest-element-in-an-array

int findKthLargest(int* nums, int numsSize, int k) {
    int temp,i,j;
    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[j] > nums[i]) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    return nums[k - 1];
}
