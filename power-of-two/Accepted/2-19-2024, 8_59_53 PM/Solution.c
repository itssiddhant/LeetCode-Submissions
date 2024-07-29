// https://leetcode.com/problems/power-of-two

bool isPowerOfTwo(int n) {
    bool a=false;
    if (n == 1)
        return true;
    for (int i = 0; i < 100; i++) {
        if (n == pow(2, i)){
            a=true;
            return a;
            }
    };
    return a;
};