bool find132pattern(int* nums, int numsSize) {
    int secondElement = INT_MIN;
    int stack[numsSize];
    int top = -1;
    for (int i = numsSize - 1; i >= 0; i--) {
        if (nums[i] < secondElement) {
            return true;
        }
        while (top != -1 && nums[i] > stack[top]) {
            secondElement = stack[top--];
        }
        stack[++top] = nums[i];
    }
    return false;
}
