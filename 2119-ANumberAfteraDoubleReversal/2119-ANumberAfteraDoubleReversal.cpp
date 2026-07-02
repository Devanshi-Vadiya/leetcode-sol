// Last updated: 7/2/2026, 12:39:40 PM
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        return num == 0 || num % 10 != 0;
5    }
6};