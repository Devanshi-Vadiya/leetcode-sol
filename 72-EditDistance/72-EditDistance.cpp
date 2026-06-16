// Last updated: 6/16/2026, 2:23:38 PM
1class Solution {
2public:
3    string simplifyPath(string path) {
4
5        vector<string> dirs;
6        string dir = "";
7
8        for (int i = 0; i <= path.size(); i++) {
9
10            if (i == path.size() || path[i] == '/') {
11
12                if (dir == "..") {
13                    if (!dirs.empty()) {
14                        dirs.pop_back();
15                    }
16                }
17                else if (dir != "" && dir != ".") {
18                    dirs.push_back(dir);
19                }
20
21                dir = "";
22            }
23            else {
24                dir += path[i];
25            }
26        }
27
28        string ans = "";
29
30        for (string s : dirs) {
31            ans += "/" + s;
32        }
33
34        return ans.empty() ? "/" : ans;
35    }
36};