// Last updated: 6/16/2026, 1:28:12 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4
5        int i = 0, j = 0;
6        int n = version1.size();
7        int m = version2.size();
8
9        while (i < n || j < m) {
10
11            int num1 = 0;
12            int num2 = 0;
13
14            while (i < n && version1[i] != '.') {
15                num1 = num1 * 10 + (version1[i] - '0');
16                i++;
17            }
18
19            while (j < m && version2[j] != '.') {
20                num2 = num2 * 10 + (version2[j] - '0');
21                j++;
22            }
23
24            if (num1 > num2) {
25                return 1;
26            }
27
28            if (num1 < num2) {
29                return -1;
30            }
31
32            i++;
33            j++;
34        }
35
36        return 0;
37    }
38};