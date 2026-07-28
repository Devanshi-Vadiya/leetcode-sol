// Last updated: 7/28/2026, 1:13:58 PM
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4
5                //even sum = black
6                //odd sum = white
7
8                int col = coordinates[0] - 'a' + 1;
9                int row = coordinates[1] - '0';
10
11                return (col+row) % 2 !=0;
12    }
13};