// Last updated: 7/13/2026, 10:04:58 AM
1class Solution {
2public:
3    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
4        map<int, int> mp;
5
6        for (auto &v : items1)
7            mp[v[0]] += v[1];
8
9        for (auto &v : items2)
10            mp[v[0]] += v[1];
11
12        vector<vector<int>> ans;
13
14        for (auto it : mp)
15            ans.push_back({it.first, it.second});
16
17        return ans;
18    }
19};