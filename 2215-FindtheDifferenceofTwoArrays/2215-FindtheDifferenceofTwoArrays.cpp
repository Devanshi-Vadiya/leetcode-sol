// Last updated: 7/8/2026, 3:05:20 PM
1class Solution {
2public:
3    vector<int> intersection(vector<vector<int>>& nums) {
4        map<int, int> mp;
5
6        for (auto &v : nums) {
7            unordered_set<int> st(v.begin(), v.end());
8
9            for (int x : st)
10                mp[x]++;
11        }
12
13        vector<int> ans;
14
15        for (auto it : mp) {
16            if (it.second == nums.size())
17                ans.push_back(it.first);
18        }
19
20        return ans;
21    }
22};