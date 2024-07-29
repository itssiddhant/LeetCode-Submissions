// https://leetcode.com/problems/beautiful-array

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* BeautifulArray(int n, int* returnSize) {
    if (n == 1) {
        *returnSize = 1;
        int* beautiful = (int*)malloc(sizeof(int));
        beautiful[0] = 1;
        return beautiful;
    }
    
    int* odd = BeautifulArray((n + 1) / 2, returnSize);
    int oddSize = *returnSize;
    int* even = BeautifulArray(n / 2, returnSize);
    int evenSize = *returnSize;

    *returnSize = oddSize + evenSize;
    int* beautiful = (int*)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i < oddSize; i++) {
        beautiful[i] = 2 * odd[i] - 1;
    }
    for (int i = 0; i < evenSize; i++) {
        beautiful[i + oddSize] = 2 * even[i];
    }
    free(odd);
    free(even);
    return beautiful;
}
int* beautifulArray(int n, int* returnSize) {
    return generateBeautifulArray(n, returnSize);
}