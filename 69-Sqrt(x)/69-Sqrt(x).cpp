// Last updated: 6/29/2026, 10:52:48 AM
1class Solution {
2public:
3    int mySqrt(int x) {
4        long long left = 0, right = x;
5        int ans = 0;
6
7        while (left <= right) {
8            long long mid = left + (right - left) / 2;
9
10            if (mid * mid <= x) {
11                ans = mid;
12                left = mid + 1;
13            } else {
14                right = mid - 1;
15            }
16        }
17
18        return ans;
19    }
20};