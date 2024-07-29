// https://leetcode.com/problems/intersection-of-two-arrays

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ret= (int*)malloc(sizeof(int)*nums1Size);
    int index=0;
    
    for (int i=0; i<nums1Size;i++){
        int element = nums1[i];
        int found=0;

        for (int j=0; j<nums2Size;j++){
            if (element==nums2[j]){
                 for (int k = 0; k < index; k++) {
                    if (ret[k] == element) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    ret[index++] = element;
                    break;
                }
            }
        }
    }
    *returnSize=index;
    return ret;
}