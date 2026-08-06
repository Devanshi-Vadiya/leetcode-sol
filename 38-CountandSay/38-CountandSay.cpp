// Last updated: 8/6/2026, 5:00:58 PM
1class Solution {
2public:
3    string countAndSay(int n) {
4
5        // First term of the sequence
6        string ans = "1";
7
8        // Generate terms from 2 to n
9        for (int i = 2; i <= n; i++) {
10
11            string temp = "";
12            int count = 1;
13
14            // Read the current string (ans)
15            for (int j = 1; j < ans.size(); j++) {
16
17                if (ans[j] == ans[j - 1]) {
18                    count++;
19                }
20                else {
21                    temp += to_string(count);
22                    temp += ans[j - 1];
23                    count = 1;
24                }
25            }
26
27            // Add the last group
28            temp += to_string(count);
29            temp += ans.back();
30
31            // Update ans for the next iteration
32            ans = temp;
33        }
34
35        return ans;
36    }
37};