// https://leetcode.com/problems/find-peak-element

int findPeakElement(int* nums, int numsSize) {
    int ans;
    for (int i=1; i<numsSize-1; i++){
        if(nums[i-1]<=nums[i]&& nums[i]>=nums[i+1]){
            ans =i;
            break;
        }
    }
    return ans;
}