// Last updated: 7/12/2026, 1:39:33 PM
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int sum = 0;
5
6        for (int i = 0; i < k; i++)
7            sum += nums[i];
8
9        int maxSum = sum;
10
11        for (int i = k; i < nums.size(); i++) {
12            sum += nums[i] - nums[i - k];
13            maxSum = max(maxSum, sum);
14        }
15
16        return (double)maxSum / k;
17    }
18};