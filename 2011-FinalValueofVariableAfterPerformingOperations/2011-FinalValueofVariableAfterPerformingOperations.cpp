// Last updated: 5/15/2026, 2:53:28 PM
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int ans = 0;
5
6        for(int i = 0; i < operations.size(); i++) {          
7            if(operations[i] == "--X" || operations[i] == "X--") {
8                ans--;
9            }
10            else {
11                ans++;
12            }
13        }
14
15        return ans;
16    }
17};