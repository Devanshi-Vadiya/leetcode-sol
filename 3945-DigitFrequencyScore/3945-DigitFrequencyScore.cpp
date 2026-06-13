// Last updated: 6/13/2026, 11:50:13 AM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        int ans = 0;
5
6        while (n > 0) {
7            ans += n % 10;
8            n /= 10;
9        }
10
11        return ans;
12    }
13};