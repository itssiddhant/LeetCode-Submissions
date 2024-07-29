// https://leetcode.com/problems/missing-number

int missingNumber(int* nums, int numsSize) {
    // qsort(nums,numsSize,sizeof(int), compare);
    for (int i=0; i<numsSize;i++){
        if ((i) != nums[i]){
            a=i;
        }
    }
    return i;
}
int compare(const void *a, const void *b){
    return (*(int*)a- *(int*)b);
}