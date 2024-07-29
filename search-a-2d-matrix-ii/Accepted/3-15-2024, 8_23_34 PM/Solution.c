// https://leetcode.com/problems/search-a-2d-matrix-ii

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i = 0;
    int j = *matrixColSize - 1; 
    while (i < matrixSize && j >= 0) {
        if (matrix[i][j] == target)
            return true; 
        if (matrix[i][j] > target)
            j--;
        else 
            i++;
    }
    return false;
}