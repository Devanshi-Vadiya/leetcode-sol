// Last updated: 6/13/2026, 11:31:14 AM
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector<string> res;
5
6        for (char i : words[0]) {
7            string temp = "";
8            temp += i;
9
10            bool found = true;
11
12            for (int j = 1; j < words.size(); j++) {
13                if (!words[j].contains(i)) {   // <-- Mistake corrected
14                    found = false;
15                    break;
16                }
17
18                words[j].erase(words[j].find(i), 1);
19            }
20
21            if (found) {
22                res.push_back(temp);
23            }
24        }
25
26        return res;
27    }
28};