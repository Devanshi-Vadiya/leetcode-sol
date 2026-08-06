// Last updated: 8/6/2026, 10:09:52 AM
1class Solution {
2public:
3    int countRatioSubarrays(vector<int>& nums, int a, int b) {
4 int n = nums.size();
5        int ans = 0;
6
7        for (int i = 0; i < n; i++) {
8
9            int even = 0;
10            int odd = 0;
11
12            for (int j = i; j < n; j++) {
13
14                if (nums[j] % 2 == 0)
15                    even++;
16                else
17                    odd++;
18
19                if (odd > 0 && even * b <= odd * a)
20                    ans++;
21            }
22        }
23
24        return ans;
25    }
26};