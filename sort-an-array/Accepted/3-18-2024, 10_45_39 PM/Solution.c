// https://leetcode.com/problems/sort-an-array

void Merge(int A[],int p,int q,int r){
    int i,j,k,n1,n2;
    n1= q-p+1;
    n2=r-q;
    int *L = (int*)malloc((n1 + 1) * sizeof(int));
    int *R = (int*)malloc((n2 + 1) * sizeof(int));
    for (i=0; i<n1;i++){
        L[i]=A[p+i];
    }
    for(j=0;j<n2;j++){
        R[j]=A[q+1+j];
    }
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    i=0;j=0;
    for(k=p;k<=r;k++){
        if (L[i]<=R[j]){
            A[k]=L[i];
            i=i+1;
        }
        else{
            A[k]=R[j];
            j=j+1;
        }
    }
}
void MergeSort(int A[],int p,int r){
    if(p<r){
        int q= (p+r)/2;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}
int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    MergeSort(nums, 0, numsSize - 1);
    return nums;
}