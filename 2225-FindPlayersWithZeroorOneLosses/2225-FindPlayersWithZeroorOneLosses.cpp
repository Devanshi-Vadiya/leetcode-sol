// Last updated: 6/29/2026, 10:40:00 AM
1class Solution {
2public:
3    int trailingZeroes(int n) {
4
5        int count = 0;
6
7        while(n > 0){
8
9            n = n / 5;
10            count = count + n;
11        }
12
13        return count;
14    }
15};