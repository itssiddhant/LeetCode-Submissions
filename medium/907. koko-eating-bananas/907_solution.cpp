#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPo(vector<int> & piles,int h , int mid){
        int hour =0;

        for(auto p: piles){
            hour += p/mid;
            if(p%mid !=0){
                hour++;
            }
            if(hour>h)return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high = *max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid = low+(high -low)/2;

            if(isPo(piles,h,mid)){
                high= mid-1;
            }
            else low =mid+1;
        }
        return low;
    }
};