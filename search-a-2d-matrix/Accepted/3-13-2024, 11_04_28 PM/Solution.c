// https://leetcode.com/problems/search-a-2d-matrix

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    bool a =false;
    for (int i=0; i<matrixSize;i++){
        for(int j=0; j<*matrixColSize;j++){
            if (target==matrix[i][j]){
                a= true;
            }
        }
    }
    return a;
}