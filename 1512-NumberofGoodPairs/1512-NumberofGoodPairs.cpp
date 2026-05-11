// Last updated: 5/11/2026, 8:21:11 PM
1class Solution {
2public:
3
4    int numIdenticalPairs(vector<int>& nums) {
5
6        // HashMap:
7        // number -> frequency
8        unordered_map<int, int> freq;
9
10        int count = 0;
11
12        // Traverse through array
13        for(int i = 0; i < nums.size(); i++) {
14
15            // Add previous frequency to count
16            count += freq[nums[i]];
17
18            // Increase frequency
19            freq[nums[i]]++;
20        }
21
22        return count;
23    }
24};