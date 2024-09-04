int missingNumber(int* nums, int numsSize) {
   int m= numsSize;
   for (int i=0; i<numsSize;){
       m ^=i^nums[i];
       i++;
   }
   return m;
}
