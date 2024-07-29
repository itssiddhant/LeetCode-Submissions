// https://leetcode.com/problems/kth-largest-element-in-an-array

int findKthLargest(int* nums, int numsSize, int k) {
    int swapped,temp;
    for (int i=0; i<numsSize-1;i++){
        swapped=0;
        for (int j=0;j<numsSize-i-1;j++){        
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                swapped=1;
            }
        }
        if (swapped==0){
            break;
        }
    }
    return nums[numsSize-k];
}