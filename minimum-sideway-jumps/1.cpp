class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size()-1;

        vector<int> curr(4,1e9);
        vector<int> next(4,0);

        for(int pos = n-1; pos>=0; pos-- ){
            for(int lane = 1; lane<4; lane++){
                if(obstacles[pos+1]!=lane){
                    curr[lane]= next[lane];
                }
                else{
                    //sideways
                    int ans = 1e9;
                    for(int i = 1; i<=3; i++){
                        if(lane!=i && obstacles[pos]!=i)
                            ans = min(ans, 1+ next[i]);
                    }
                    curr[lane]=ans;
                }
            } 
            next = curr;
        }
        return min(next[2],min(1+next[1],1+next[3]));
    }
};