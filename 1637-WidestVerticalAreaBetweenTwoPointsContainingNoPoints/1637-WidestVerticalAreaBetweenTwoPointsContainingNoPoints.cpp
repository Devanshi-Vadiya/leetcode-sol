// Last updated: 8/12/2026, 2:16:56 PM
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        
5        vector<int> x;
6        
7        for (auto point : points) {
8            x.push_back(point[0]);
9        }
10        
11        sort(x.begin(), x.end());
12        
13        int ans = 0;
14        
15        for (int i = 1; i < x.size(); i++) {
16            ans = max(ans, x[i] - x[i - 1]);
17        }
18        
19        return ans;
20    }
21};