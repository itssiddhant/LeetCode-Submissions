// https://leetcode.com/problems/missing-number

int missingNumber(int* nums, int numsSize) {
    int a;
    // qsort(nums,numsSize,sizeof(int), compare);
    for (int i=0; i<numsSize;i++){
        if ((i) != nums[i]){
            a=i;
        }
    }
    return a;
}
int compare(const void *a, const void *b){
    return (*(int*)a- *(int*)b);
}