// Last updated: 5/21/2026, 9:38:37 AM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        int count = 0;
5        for (char j : jewels) {
6            for (char s : stones) {
7                if (j == s) {
8                    count++;
9                }
10            }
11        }
12        return count;
13    }
14};