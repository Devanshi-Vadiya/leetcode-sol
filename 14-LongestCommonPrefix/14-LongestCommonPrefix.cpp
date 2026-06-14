// Last updated: 6/14/2026, 6:30:00 PM
1class Solution {
2public:
3    int returnToBoundaryCount(vector<int>& nums) {
4        int ans = 0;
5        int sum = 0;
6
7        for (int num : nums) {
8            sum += num;
9
10            if (sum == 0) {
11                ans++;
12            }
13        }
14
15        return ans;
16    }
17};