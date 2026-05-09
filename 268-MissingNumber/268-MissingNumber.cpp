// Last updated: 5/9/2026, 10:12:32 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4
5        int n = nums.size();
6
7        int expectedSum = n * (n + 1) / 2;
8
9        int actualSum = 0;
10
11        for (int num : nums) {
12            actualSum += num;
13        }
14
15        return expectedSum - actualSum;
16    }
17};