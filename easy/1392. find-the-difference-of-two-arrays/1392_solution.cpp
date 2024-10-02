class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>seen1(nums1.begin(),nums1.end());
        unordered_set<int>seen2(nums2.begin(),nums2.end());

        vector<vector<int>>answer(2);
        
        for(int num : seen1){
            if(seen2.find(num)==seen2.end() )
                answer[0].push_back(num);
        }
        for(int num : seen2){
            if(seen1.find(num)==seen1.end())
                answer[1].push_back(num);
        }
        return answer;
    }
};