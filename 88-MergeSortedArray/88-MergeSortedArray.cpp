// Last updated: 5/19/2026, 3:31:58 PM
1class Solution {
2public:
3    int sumOfUnique(vector<int>& nums) {
4        unordered_map<int, int> frequency;
5
6        for (int i = 0; i < nums.size(); i++) {
7            frequency[nums[i]]++;
8        }
9
10        int sum = 0;
11
12        for (int i = 0; i < nums.size(); i++) {
13            if (frequency[nums[i]] == 1) {
14                sum += nums[i];
15            }
16        }
17
18        return sum;
19    }
20};