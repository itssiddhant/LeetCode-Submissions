// https://leetcode.com/problems/search-a-2d-matrix-ii



bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    bool a=false;
    for (int i=0; i<matrixSize;i++){
        for (int j=0; j<*matrixColSize; j++){
            if (matrix[i][j]==target){
                a= true;
            }
        }
    }
    return a;
}