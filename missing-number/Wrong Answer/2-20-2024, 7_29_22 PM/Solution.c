// https://leetcode.com/problems/missing-number

int missingNumber(int* nums, int numsSize) {
    int a;
    for (int i=0; i<numsSize;i++){
        if ((i) != nums[i]){
            a=i;
        }
        else if(numsSize==1 && nums[0]==0){
            a=1;
        }
    }
    return a ;
}