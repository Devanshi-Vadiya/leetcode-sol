// Last updated: 9/5/2026, 10:03:24 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        int ansIdx = 0;         // index we're currently testing as the answer
7        int globalMax = INT_MIN;          // biggest number seen anywhere so far
8        int ansMax = INT_MIN;   // biggest number up to ansIdx
9
10        for (int i = 0; i < n; i++) {
11            globalMax = max(globalMax, nums[i]);
12
13            // only update the candidate's max while we're still inside its prefix
14            if (i == ansIdx)
15                ansMax = max(ansMax, nums[i]);
16
17            // this number is below the allowed floor, jump past it
18            if (nums[i] < ansMax - k) {
19                ansIdx = i + 1;
20                ansMax = globalMax;
21            }
22        }
23
24        return ansIdx < n ? ansIdx : -1;
25    }
26};