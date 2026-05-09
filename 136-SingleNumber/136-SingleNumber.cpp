// Last updated: 5/9/2026, 9:45:43 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5
6        for (int num : nums) {
7            ans ^= num;
8        }
9
10        return ans;
11    }
12};