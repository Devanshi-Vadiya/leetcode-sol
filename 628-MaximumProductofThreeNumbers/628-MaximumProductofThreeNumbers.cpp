// Last updated: 7/11/2026, 9:32:52 AM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6
7        return max(nums[0] * nums[1] * nums[n - 1],
8                   nums[n - 1] * nums[n - 2] * nums[n - 3]);
9    }
10};