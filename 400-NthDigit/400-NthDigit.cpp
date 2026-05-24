// Last updated: 5/24/2026, 4:10:58 PM
1class Solution {
2public:
3    int findMaxK(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        int ans = -1;
8
9        for(int i = 0; i < nums.size(); i++) {
10
11            if(binary_search(nums.begin(), nums.end(), -nums[i])) {
12                ans = max(ans, abs(nums[i]));
13            }
14        }
15
16        return ans;
17    }
18};