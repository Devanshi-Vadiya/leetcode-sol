// Last updated: 8/4/2026, 2:28:10 PM
1class Solution {
2public:
3    int solve(vector<int>& nums, int left, int right, vector<vector<int>>& dp) {
4        if (left == right)
5            return nums[left];
6
7        if (dp[left][right] != INT_MIN)
8            return dp[left][right];
9
10        int pickLeft = nums[left] - solve(nums, left + 1, right, dp);
11        int pickRight = nums[right] - solve(nums, left, right - 1, dp);
12
13        return dp[left][right] = max(pickLeft, pickRight);
14    }
15
16    bool predictTheWinner(vector<int>& nums) {
17        int n = nums.size();
18        vector<vector<int>> dp(n, vector<int>(n, INT_MIN));
19
20        return solve(nums, 0, n - 1, dp) >= 0;
21    }
22};