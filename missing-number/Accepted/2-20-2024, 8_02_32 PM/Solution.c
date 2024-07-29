// https://leetcode.com/problems/missing-number

int missingNumber(int* nums, int numsSize) {
   int m= numsSize;

   for (int i=0; i<numsSize;i++){
       m ^=i^nums[i];
   }
   return m;
}
