// Last updated: 7/28/2026, 2:21:06 PM
1class Solution {
2public:
3    int finalElement(vector<int>& nums) {
4        return max(nums.front(),nums.back());
5    }
6};