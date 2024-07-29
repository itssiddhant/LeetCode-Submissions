// https://leetcode.com/problems/median-of-two-sorted-arrays

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums3Size = nums1Size + nums2Size;
    int nums3[nums3Size];
    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            nums3[k++] = nums1[i++];
        } else {
            nums3[k++] = nums2[j++];
        }
    }
    while (i < nums1Size) {
        nums3[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        nums3[k++] = nums2[j++];
    }
    if (nums3Size % 2 == 0) {
        return (nums3[nums3Size / 2 - 1] + nums3[nums3Size / 2]) / 2.0;
    } else {
        return nums3[nums3Size / 2];
    }
}
