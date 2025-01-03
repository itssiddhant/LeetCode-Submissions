class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int ans = 0;
        int arrow = 0;

        for(int i=0; i<points.size(); i++){
            if(ans==0 || points[i][0]>arrow){
                ans++;
                arrow = points[i][1];
            }
        }
        return ans;
    }
};