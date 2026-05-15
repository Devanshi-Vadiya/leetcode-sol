// Last updated: 5/15/2026, 2:57:55 PM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        vector<int> ans = nums;
5
6        for(int i = 0; i < nums.size(); i++) {
7            ans.push_back(nums[i]);
8        }
9
10        return ans;
11    }
12};