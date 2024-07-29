// https://leetcode.com/problems/pass-the-pillow

class Solution {
public:
    int passThePillow(int n, int time) {
        int index = 1;
        bool forward = true;
        while (time != 0) {
            if (forward) {
                if (index == n) {
                    forward = false;
                    index--;
                } else {
                    index++;
                }
            } else {
                if (index == 1) {
                    forward = true;
                    index++;
                } else {
                    index--;
                }
            }
            time--;
        }
        return index;
    }
};