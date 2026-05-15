// Last updated: 5/15/2026, 2:54:08 PM
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int x = 0;
5
6        for(int i = 0; i < operations.size(); i++) {
7            if(operations[i][1] == '+') {
8                x++;
9            } else {
10                x--;
11            }
12        }
13
14        return x;
15    }
16};