// Last updated: 7/15/2026, 5:25:20 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int> mp; // value -> index
5        
6        for(int i = 0; i < nums.size(); i++) {
7            int complement = target - nums[i];
8            
9            if(mp.find(complement) != mp.end()) {
10                return {mp[complement], i};
11            }
12            
13            mp[nums[i]] = i;
14        }
15        
16        return {}; // if no solution
17    }
18};