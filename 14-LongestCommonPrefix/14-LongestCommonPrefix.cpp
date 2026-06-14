// Last updated: 6/14/2026, 5:35:29 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        int n = nums.size();
6
7        for (int num : nums) {
8            mp[num]++;
9
10            if (mp[num] > n / 2) {
11                return num;
12            }
13        }
14
15        return -1;
16    }
17};