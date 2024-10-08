char* largestNumber(int* nums, int numsSize) {
    int hasNonZero = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            hasNonZero = 1;
            break;
        }
    }
    if (!hasNonZero) {
        char* result = (char*)malloc(2 * sizeof(char));
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            char str1[22], str2[22];
            sprintf(str1, "%d%d", nums[i], nums[j]);
            sprintf(str2, "%d%d", nums[j], nums[i]);
            if (strcmp(str2, str1) > 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    char* rets = (char*)malloc((numsSize * 12 + 1) * sizeof(char));
    rets[0] = '\0';
   for (int i = 0; i < numsSize; i++) {
        sprintf(rets + strlen(rets), "%d", nums[i]);
    }

    return rets;
}