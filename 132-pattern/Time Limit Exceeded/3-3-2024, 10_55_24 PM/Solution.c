// https://leetcode.com/problems/132-pattern

bool find132pattern(int* nums, int numsSize) {
    for (int i=0; i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            for(int k=j+1;k<numsSize;k++){
                if (nums[i]<nums[k] && nums[i]<nums[j] && nums[k]<nums[j]){
                    return true;
                }
            }
        }
    }
    return false;
}