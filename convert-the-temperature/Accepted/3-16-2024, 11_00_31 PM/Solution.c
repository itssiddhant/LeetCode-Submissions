// https://leetcode.com/problems/convert-the-temperature

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double *ans= (double*)malloc(sizeof(double)*2);
    if (ans == NULL) {
        *returnSize = 0; 
    }
    ans[0] = celsius +273.15;
    ans[1] = celsius *1.80 +32.00;
    *returnSize = 2; 
    return ans;
}