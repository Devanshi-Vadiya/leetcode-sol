// Last updated: 5/11/2026, 3:25:28 PM
1class Solution {
2public:
3
4    vector<int> twoSum(vector<int>& nums, int target) {
5
6        // Hashmap to store:
7        // number -> index
8        unordered_map<int, int> seen;
9
10        // Traverse through the array
11        for(int i = 0; i < nums.size(); i++) {
12
13            // Calculate the number needed
14            // to reach the target
15            int complement = target - nums[i];
16
17            // Check if complement already exists
18            // in the hashmap
19            if(seen.find(complement) != seen.end()) {
20
21                // If found, return:
22                // index of complement + current index
23                return {seen[complement], i};
24            }
25
26            // Store current number and its index
27            seen[nums[i]] = i;
28        }
29
30        // Return empty vector if no answer found
31        return {};
32    }
33};