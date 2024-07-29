// https://leetcode.com/problems/132-pattern

bool find132pattern(int* nums, int numsSize) {
    int min_i = nums[0];
    for (int j = 1; j < numsSize - 1; j++) {
        for (int k = j + 1; k < numsSize; k++) {
            if (nums[k] > min_i && nums[j] > nums[k]) {
                return true;
            }
        }
        min_i = (min_i < nums[j]) ? min_i : nums[j];
    }
    return false;
}
