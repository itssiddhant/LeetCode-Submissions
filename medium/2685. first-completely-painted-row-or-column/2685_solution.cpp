class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]] = i;
        }
        int mini = INT_MAX, maxi = INT_MIN;
        int rowSize = mat.size();
        int colSize = mat[0].size();
        for (int row = 0; row < rowSize; row++) {
            maxi = INT_MIN;
            for (int col = 0; col < colSize; col++) {
                int indexVal = mp[mat[row][col]];
                maxi = max(maxi, indexVal);
            }
            mini = min(mini, maxi);
        }
        for (int col = 0; col < colSize; col++) {
            maxi = INT_MIN;
            for (int row = 0; row < rowSize; row++) {
                int indexVal2 = mp[mat[row][col]];
                maxi = max(maxi, indexVal2);
            }
            mini = min(mini, maxi);
        }
        return mini;
    }
};