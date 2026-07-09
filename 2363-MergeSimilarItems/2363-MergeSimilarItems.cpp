// Last updated: 7/9/2026, 2:35:07 PM
1class Solution {
2public:
3    int maxFrequencyElements(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for (int num : nums)
7            mp[num]++;
8
9        int maxFreq = 0;
10
11        for (auto it : mp)
12            maxFreq = max(maxFreq, it.second);
13
14        int ans = 0;
15
16        for (auto it : mp) {
17            if (it.second == maxFreq)
18                ans += it.second;
19        }
20
21        return ans;
22    }
23};