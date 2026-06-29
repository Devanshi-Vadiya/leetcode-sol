// Last updated: 6/29/2026, 10:16:31 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int candidate = 0;
5        int count = 0;
6
7        for (int num : nums) {
8
9            if (count == 0) {
10                candidate = num;
11            }
12
13            if (num == candidate) {
14                count++;
15            } else {
16                count--;
17            }
18        }
19
20        return candidate;
21    }
22};