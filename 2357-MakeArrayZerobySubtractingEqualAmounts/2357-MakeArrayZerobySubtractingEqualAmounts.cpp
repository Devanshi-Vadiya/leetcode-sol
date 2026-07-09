// Last updated: 7/9/2026, 2:33:04 PM
1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4        unordered_set<int> st;
5
6        for (int x : nums) {
7            if (x != 0)
8                st.insert(x);
9        }
10
11        return st.size();
12    }
13};