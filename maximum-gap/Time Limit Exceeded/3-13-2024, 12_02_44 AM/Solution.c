// https://leetcode.com/problems/maximum-gap

int maximumGap(int* nums, int numsSize) {
    int max = INT_MIN;
    int diff[numsSize];
    if (numsSize < 2) {
        return 0;
    }
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < numsSize - 1; i++) {
        diff[i] = nums[i + 1] - nums[i];
    }
    for (int i = 0; i < numsSize - 1; i++) {
        if (diff[i] > max) {
            max = diff[i];
        }
    }
    return max;
}