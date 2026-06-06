// Last updated: 6/6/2026, 11:10:53 AM
1class Solution {
2public:
3    string removeDuplicates(string s, int k) {
4        string ans;
5        vector<int> count;
6
7        for(char ch : s) {
8            ans.push_back(ch);
9
10            if(ans.size() == 1 || ans.back() != ans[ans.size() - 2]) {
11                count.push_back(1);
12            } else {
13                count.push_back(count.back() + 1);
14            }
15
16            if(count.back() == k) {
17                for(int i = 0; i < k; i++) {
18                    ans.pop_back();
19                    count.pop_back();
20                }
21            }
22        }
23
24        return ans;
25    }
26};