// Last updated: 5/9/2026, 10:04:29 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        vector<int> ans;
5
6        sort(nums.begin(), nums.end());
7
8        int expected = 1;
9        int i = 0;
10
11        while (expected <= nums.size()) {
12
13            if (i < nums.size() && nums[i] == expected) {
14
15                while (i < nums.size() && nums[i] == expected) {
16                    i++;
17                }
18
19            } else {
20                ans.push_back(expected);
21            }
22
23            expected++;
24        }
25
26        return ans;
27    }
28};