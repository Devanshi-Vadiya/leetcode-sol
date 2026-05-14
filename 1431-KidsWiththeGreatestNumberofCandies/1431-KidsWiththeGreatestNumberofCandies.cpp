// Last updated: 5/14/2026, 4:48:51 PM
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> ans;
5
6        for(int i = 0; i < n; i++) {
7            ans.push_back(nums[i]);
8            ans.push_back(nums[i + n]);
9        }
10
11        return ans;
12    }
13};