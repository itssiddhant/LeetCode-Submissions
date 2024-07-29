// https://leetcode.com/problems/find-peak-element

int findPeakElement(int* nums, int numsSize) {
    int ans;
    if (numsSize==1){
        ans=0;
    }
    if (numsSize==2){
        ans=nums[0];
    }
    for (int i=1; i<numsSize-1; i++){
        if( nums[i]>nums[i+1]){
            ans =i;
            break;
        }
    }
    return ans;
}