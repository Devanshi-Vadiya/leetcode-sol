// Last updated: 6/17/2026, 11:19:47 AM
1// class Solution {
2// public:
3//     string simplifyPath(string path) {
4
5//         vector<string> dirs;
6//         string dir = "";
7
8//         for (int i = 0; i <= path.size(); i++) {
9
10//             if (i == path.size() || path[i] == '/') {
11
12//                 if (dir == "..") {
13//                     if (!dirs.empty()) {
14//                         dirs.pop_back();
15//                     }
16//                 }
17//                 else if (dir != "" && dir != ".") {
18//                     dirs.push_back(dir);
19//                 }
20
21//                 dir = "";
22//             }
23//             else {
24//                 dir += path[i];
25//             }
26//         }
27
28//         string ans = "";
29
30//         for (string s : dirs) {
31//             ans += "/" + s;
32//         }
33
34//         return ans.empty() ? "/" : ans;
35//     }
36// };
37
38class Solution {
39public:
40    string simplifyPath(string path) {
41        int i = 1;
42        vector<string>res;
43        string pat;
44        while(i<path.size()){
45            while(i<path.size() && path[i]!='/' ){
46                pat+=path[i];
47                i++;
48            }
49            if(pat == ".."){
50                if(!res.empty())res.pop_back();
51            }
52            else if(pat == "" || pat == ".");
53            else res.push_back(pat);
54            pat="";
55            i++;
56        }
57        pat = "";
58        for(string s:res){
59             pat=pat+'/'+s;
60        }
61        if(pat == "") return "/";
62        return pat;
63    }
64};