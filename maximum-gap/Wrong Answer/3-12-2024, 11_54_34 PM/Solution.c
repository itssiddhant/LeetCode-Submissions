// https://leetcode.com/problems/maximum-gap

int maximumGap(int* nums, int numsSize) {
    int max=0;
    int diff[numsSize];
    for(int i=0; i<numsSize-1;i++){
        if (nums[i]<nums[i+1]){
            diff[i] = nums[i+1]-nums[i];
        }
        else{
            diff[i] = nums[i]-nums[i+1];
        }
        
    }
    for (int i=0;i<sizeof(diff)/sizeof(int);i++){
        if (diff[i]>max){
            max=diff[i];
        }
        return max;
    }
    return max;
}