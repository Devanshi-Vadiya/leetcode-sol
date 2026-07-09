// Last updated: 7/9/2026, 2:34:24 PM
1class Solution {
2public:
3    int distanceTraveled(int mainTank, int additionalTank) {
4        int distance = 0;
5
6        while (mainTank > 0) {
7            if (mainTank >= 5) {
8                distance += 50;
9                mainTank -= 5;
10
11                if (additionalTank > 0) {
12                    mainTank++;
13                    additionalTank--;
14                }
15            } else {
16                distance += mainTank * 10;
17                break;
18            }
19        }
20
21        return distance;
22    }
23};