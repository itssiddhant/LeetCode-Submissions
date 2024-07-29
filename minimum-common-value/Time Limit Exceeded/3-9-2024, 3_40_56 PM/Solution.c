// https://leetcode.com/problems/minimum-common-value

int getCommon(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int common=-1;
    for (int i=0; i<nums1Size; ++i){
        for (int j=0;j<nums2Size;j++){
            if (nums1[i]==nums2[j]){
                common=nums1[i];
                return common;
            }
        }
    }
    return common;
}