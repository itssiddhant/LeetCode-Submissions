int search(int* nums, int numsSize, int target) {
    int l, m, h;
    l =0;
    h = numsSize-1;
    while(l<=h){
        m = (l+h)/2;
        if (nums[m]==target){
            return m;
        }
        if (nums[m]<target){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return -1;
}