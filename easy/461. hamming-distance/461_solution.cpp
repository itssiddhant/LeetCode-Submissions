class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance =0;
        int n = x^y;
        while(n){
            ++distance;
            n = n&(n-1);
        }
        return distance;
    }
};