// https://leetcode.com/problems/missing-number

int missingNumber(int* nums, int numsSize) {
    int a;
    for (int i=0; i<numsSize;i++){
        if(numsSize==1){
            a=1;
        }
        else if ((i) != nums[i]){
            a=i;
        }
    }
    return a ;
}