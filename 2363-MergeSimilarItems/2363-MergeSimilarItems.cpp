// Last updated: 7/9/2026, 2:33:39 PM
1class Solution {
2public:
3    int alternateDigitSum(int n) {
4        string s = to_string(n);
5        int sum = 0;
6
7        for (int i = 0; i < s.size(); i++) {
8            if (i % 2 == 0)
9                sum += s[i] - '0';
10            else
11                sum -= s[i] - '0';
12        }
13
14        return sum;
15    }
16};