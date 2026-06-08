// Last updated: 6/8/2026, 10:14:08 AM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4
5        for(int i = 0; i < nums.size(); i++) {
6
7            for(int j = i + 1; j < nums.size() && j - i <= k; j++) {
8
9                if(nums[i] == nums[j]) {
10                    return true;
11                }
12            }
13        }
14
15        return false;
16    }
17};