// Last updated: 5/24/2026, 4:12:33 PM
1class Solution {
2public:
3    int findMaxK(std::vector<int>& nums) {
4        std::sort(nums.begin(), nums.end());
5        int n = nums.size();
6        for (int i = n-1; i >= 0; i--) {
7            if (nums[i] > 0 && std::binary_search(nums.begin(), nums.end(), -nums[i])) {
8                return nums[i];
9            }
10        }
11        return -1;  // If no such pair found
12    }
13};