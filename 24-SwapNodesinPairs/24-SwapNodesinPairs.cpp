// Last updated: 5/20/2026, 5:36:46 PM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int steps = 0;
5
6        while (num > 0) {
7            if (num % 2 == 0) {
8                num = num / 2;
9            } else {
10                num = num - 1;
11            }
12
13            steps++;
14        }
15
16        return steps;
17    }
18};