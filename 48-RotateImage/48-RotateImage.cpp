// Last updated: 8/25/2026, 1:15:20 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        //reverse the rows and then transpose 
5          int n = matrix.size();
6
7        // Reverse rows
8        for (int i = 0; i < n / 2; i++) {
9            swap(matrix[i], matrix[n - i - 1]);
10        }
11
12        // Transpose
13        for (int i = 0; i < n; i++) {
14            for (int j = i + 1; j < n; j++) {
15                swap(matrix[i][j], matrix[j][i]);
16            }
17        }
18    }
19};