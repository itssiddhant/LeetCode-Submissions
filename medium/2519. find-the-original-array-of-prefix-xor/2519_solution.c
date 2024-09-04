int* findArray(int* pref, int prefSize, int* returnSize) {
    int *ret= (int*)malloc(prefSize*sizeof(int));
    ret[0]=pref[0];
    for (int i=1; i<prefSize;i++){
        ret[i]=pref[i]^pref[i-1];
    }
    *returnSize = prefSize;
    return ret;
}