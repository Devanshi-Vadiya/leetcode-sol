// Last updated: 6/29/2026, 10:56:54 AM
1class Solution {
2public:
3    vector<int> sortArrayByParityII(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans(n);
6
7        int even = 0, odd = 1;
8
9        for (int num : nums) {
10            if (num % 2 == 0) {
11                ans[even] = num;
12                even += 2;
13            } else {
14                ans[odd] = num;
15                odd += 2;
16            }
17        }
18
19        return ans;
20    }
21};