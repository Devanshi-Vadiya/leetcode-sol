// Last updated: 6/8/2026, 10:32:31 AM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4
5        unordered_map<int,int> mp;
6
7        for(int i = 0; i < nums.size(); i++) {
8
9            if(mp.count(nums[i]) && i - mp[nums[i]] <= k) {//stores the number and the last index where it is stored. and check the condition of k.
10                return true; 
11            }
12
13            mp[nums[i]] = i;
14        }
15
16        return false;
17    }
18};