// Last updated: 7/12/2026, 1:41:25 PM
1class Solution {
2public:
3    int findLengthOfLCIS(vector<int>& nums) {
4        int ans = 1, count = 1;
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] > nums[i - 1])
8                count++;
9            else
10                count = 1;
11
12            ans = max(ans, count);
13        }
14
15        return ans;
16    }
17};