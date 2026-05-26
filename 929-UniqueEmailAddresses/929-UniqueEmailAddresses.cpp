// Last updated: 5/26/2026, 1:30:33 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4
5        for(int i = 0; i < nums.size(); i++) {
6
7            if(nums[i] >= target) {
8                return i;
9            }
10        }
11
12        return nums.size();
13    }
14};