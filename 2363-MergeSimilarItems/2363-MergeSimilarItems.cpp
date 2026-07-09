// Last updated: 7/9/2026, 2:36:04 PM
1class Solution {
2public:
3    string triangleType(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        if (nums[0] + nums[1] <= nums[2])
7            return "none";
8
9        if (nums[0] == nums[1] && nums[1] == nums[2])
10            return "equilateral";
11
12        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2])
13            return "isosceles";
14
15        return "scalene";
16    }
17};