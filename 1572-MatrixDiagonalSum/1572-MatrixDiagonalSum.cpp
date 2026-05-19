// Last updated: 5/19/2026, 2:57:23 PM
1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4        int n = mat.size();
5        int sum = 0;
6
7        for (int i = 0; i < n; i++) {
8            sum += mat[i][i];              // left diagonal
9            sum += mat[i][n - 1 - i];      // right diagonal
10        }
11
12        if (n % 2 == 1) {
13            sum -= mat[n / 2][n / 2];      // remove extra middle
14        }
15
16        return sum;
17    }
18};