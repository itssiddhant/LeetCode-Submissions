// https://leetcode.com/problems/largest-number

char* largestNumber(int* nums, int numsSize) {
    int allZeros = 1;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            allZeros = 0;
            break;
        }
    }
    if (allZeros) {
        char* result = (char*)malloc(2 * sizeof(char));
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
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