// https://leetcode.com/problems/split-array-largest-sum

class Solution {
public:
    bool isPossible(vector<int>& nums, int n, int k, int mid) {
        int count = 1;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            if (sum + nums[i] <= mid) {
                sum += nums[i];
            } else {
                count++;
                if (count > k || nums[i] > mid) {
                    return false;
                }
                sum = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        int e = sum;
        int ans = -1;
        int mid = s + (e - s) / 2;

        if (k > n) {
            return -1;
        }
        while (s <= e) {
            if (isPossible(nums, n, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};