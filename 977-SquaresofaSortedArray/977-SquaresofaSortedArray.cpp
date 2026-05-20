// Last updated: 5/20/2026, 5:03:49 PM
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int answer = 0;
5
6        for (int num : nums) {
7            int digits = 0;
8
9            while (num > 0) {
10                digits++;
11                num = num / 10;
12            }
13
14            if (digits % 2 == 0) {
15                answer++;
16            }
17        }
18
19        return answer;
20    }
21};