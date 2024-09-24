class Solution {
public:
    int maxArea(vector<int>& height) {
        int i= 0;
        int j = height.size()-1;
        int maxi = INT_MIN;
        while(i<j){
            maxi = max(maxi,(j-i)*min(height[i],height[j]));
            if (height[i]<height[j]){
                i+=1;
            }
            else{
                j-=1;
            }
        }
        return maxi;
    }
};