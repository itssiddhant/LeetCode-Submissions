// https://leetcode.com/problems/water-bottles

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans =numBottles;
        int emptyBottles= numBottles;
        
        while (emptyBottles >= numExchange) {
            int newBottles = emptyBottles / numExchange;
            ans += newBottles;
            emptyBottles = emptyBottles % numExchange + newBottles;
        }
        return ans;
    }
};