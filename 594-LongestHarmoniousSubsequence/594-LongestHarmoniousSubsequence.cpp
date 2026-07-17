// Last updated: 7/17/2026, 1:24:52 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        int ans = 0;
6
7        for (int num : nums) {
8            mp[num]++;
9        }
10
11        for (auto it : mp) {
12            int num = it.first;
13
14            if (mp.count(num + 1)) {
15                ans = max(ans, mp[num] + mp[num + 1]);
16            }
17        }
18
19        return ans;
20    }
21};