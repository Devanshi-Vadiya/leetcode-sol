// Last updated: 7/19/2026, 6:44:17 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        for (int i = 1; i < nums.size(); i++) {
8
9            if (nums[i] == nums[i - 1]) {
10                return nums[i];
11            }
12        }
13
14        return -1;
15    }
16};