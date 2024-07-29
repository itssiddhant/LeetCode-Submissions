// https://leetcode.com/problems/convert-the-temperature

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    double k = celsius +273.15;
    double f= celsius *1.80 +32.00;
    double *ans= (double*)malloc(sizeof(double)*2);
    if (ans != NULL) {
        ans[0] = k;
        ans[1] = f;
        *returnSize = 2; 
    } else {
        *returnSize = 0; 
    }
    return ans;
}