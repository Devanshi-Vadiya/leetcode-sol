// Last updated: 7/11/2026, 9:31:48 AM
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        vector<pair<int, int>> v;
5
6        for (int i = 0; i < score.size(); i++)
7            v.push_back({score[i], i});
8
9        sort(v.rbegin(), v.rend());
10
11        vector<string> ans(score.size());
12
13        for (int i = 0; i < v.size(); i++) {
14            if (i == 0)
15                ans[v[i].second] = "Gold Medal";
16            else if (i == 1)
17                ans[v[i].second] = "Silver Medal";
18            else if (i == 2)
19                ans[v[i].second] = "Bronze Medal";
20            else
21                ans[v[i].second] = to_string(i + 1);
22        }
23
24        return ans;
25    }
26};