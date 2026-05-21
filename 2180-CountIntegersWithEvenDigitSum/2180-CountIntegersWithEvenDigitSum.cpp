// Last updated: 5/21/2026, 8:39:49 PM
1class Solution {
2public:
3    int countEven(int num) {
4        int count = 0;
5
6        for (int i = 1; i <= num; i++) {
7            int n = i;
8            int sum = 0;
9
10            while (n > 0) {
11                sum += n % 10;
12                n = n / 10;
13            }
14
15            if (sum % 2 == 0) {
16                count++;
17            }
18        }
19
20        return count;
21    }
22};