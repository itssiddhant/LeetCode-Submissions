// https://leetcode.com/problems/running-sum-of-1d-array

int* runningSum(int* nums, int numsSize, int* returnSize){
    int* returnarray = (int*)malloc(numsSize*(sizeof(int)));
    returnarray[0] = nums[0];
    for (int i=1; i<numsSize; i++){
        returnarray[i]=returnarray[i-1]+nums[i];
    }
    *returnSize=numsSize;
    return returnarray;
}