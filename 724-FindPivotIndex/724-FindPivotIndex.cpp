// Last updated: 5/19/2026, 8:01:25 PM
1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        int maxNum = nums[0];
5        int maxIndex = 0;
6
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] > maxNum) {
9                maxNum = nums[i];
10                maxIndex = i;
11            }
12        }
13
14        for (int i = 0; i < nums.size(); i++) {
15            if (i != maxIndex && maxNum < nums[i] * 2) {
16                return -1;
17            }
18        }
19
20        return maxIndex;
21    }
22};