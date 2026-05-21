// Last updated: 5/21/2026, 8:42:38 PM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int sum = 0;
5        int product = 1;
6
7        while (n > 0) {
8            int digit = n % 10;
9
10            sum += digit;
11            product *= digit;
12
13            n = n / 10;
14        }
15
16        return product - sum;
17    }
18};