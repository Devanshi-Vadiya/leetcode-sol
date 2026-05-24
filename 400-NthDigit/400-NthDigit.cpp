// Last updated: 5/24/2026, 4:11:16 PM
1class Solution {
2public:
3    int findMaxK(vector<int>& nums) {
4
5        unordered_set<int> s;
6
7        for(int x : nums) {
8            s.insert(x);
9        }
10
11        int ans = -1;
12
13        for(int x : nums) {
14
15            if(s.find(-x) != s.end()) {
16                ans = max(ans, abs(x));
17            }
18        }
19
20        return ans;
21    }
22};