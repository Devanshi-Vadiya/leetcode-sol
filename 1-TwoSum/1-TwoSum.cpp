// Last updated: 5/10/2026, 5:41:15 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp; 
5
6        for(int i = 0; i < nums.size(); i++) {
7            int complement = target - nums[i];
8
9            
10            if(mp.find(complement) != mp.end()) {
11                return {mp[complement], i};
12            }
13            
14            mp[nums[i]] = i;
15        }
16
17        return {};
18    }
19};