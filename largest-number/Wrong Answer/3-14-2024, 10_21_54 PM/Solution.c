// https://leetcode.com/problems/largest-number

char* largestNumber(int* nums, int numsSize) {
    char* rets = (char*)malloc(sizeof(char) * 100);
    rets[0] = '\0';
    int temp;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            char a[20], b[20];
            sprintf(a, "%d", nums[i]);
            sprintf(b, "%d", nums[j]);
            strcat(a, b);
            sprintf(b, "%d", nums[j]);
            strcat(b, a);
            if (strcmp(b, a) > 0) {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for (int i = 0; i < numsSize; i++) {
        char a[20];
        sprintf(a, "%d", nums[i]);
        strcat(rets, a);
    }
    return rets;
}