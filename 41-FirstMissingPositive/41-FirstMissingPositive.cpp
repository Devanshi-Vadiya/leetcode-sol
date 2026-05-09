// Last updated: 5/9/2026, 10:41:11 PM
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4
5        int n = nums.size();
6
7        for (int i = 0; i < n; i++) {
8
9            while (
10                nums[i] > 0 &&
11                nums[i] <= n &&
12                nums[nums[i] - 1] != nums[i]
13            ) {
14
15                swap(nums[i], nums[nums[i] - 1]);
16            }
17        }
18
19        for (int i = 0; i < n; i++) {
20
21            if (nums[i] != i + 1) {
22                return i + 1;
23            }
24        }
25
26        return n + 1;
27    }
28};