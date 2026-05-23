// Last updated: 5/23/2026, 10:29:13 PM
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if(n <= 0) {
5            return false;
6        }
7
8        while(n % 3 == 0) {
9            n = n / 3;
10        }
11
12        return n == 1;
13    }
14};