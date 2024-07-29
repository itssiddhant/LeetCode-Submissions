// https://leetcode.com/problems/median-of-two-sorted-arrays

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums3Size = nums1Size+nums2Size;
    int nums3[nums3Size],j;
    float sum=0;
    int k=0;
    for (int i =0; i<nums1Size; i++ ){
        nums3[i]=nums1[i];
    }
    for (int i =0, j=nums1Size; j<nums3Size && i<nums2Size; i++, j++){
        nums3[j]=nums2[i];
    }
    while (k<nums3Size){
        sum+=nums3[k];
        k++;
    }
    float med= sum/nums3Size;
    return med;
}