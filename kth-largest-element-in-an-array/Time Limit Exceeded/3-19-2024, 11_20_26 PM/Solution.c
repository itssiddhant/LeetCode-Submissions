// https://leetcode.com/problems/kth-largest-element-in-an-array

int partition(int* nums, int l, int r) {
    int pivot = nums[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (nums[j] >= pivot) {
            i++;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
    int temp = nums[i + 1];
    nums[i + 1] = nums[r];
    nums[r] = temp;
    return i + 1;
}

int quickSelect(int* nums, int l, int r, int k) {
    if (l <= r) {
        int pivotIndex = partition(nums, l, r);
        if (pivotIndex == k) {
            return nums[pivotIndex];
        } else if (pivotIndex < k) {
            return quickSelect(nums, pivotIndex + 1, r, k);
        } else {
            return quickSelect(nums, l, pivotIndex - 1, k);
        }
    }
    return -1;
}

int findKthLargest(int* nums, int numsSize, int k) {
    return quickSelect(nums, 0, numsSize - 1, k - 1);
}
