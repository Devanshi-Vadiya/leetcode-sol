// Last updated: 8/13/2026, 1:36:01 PM
1class Solution {
2public:
3    vector<int> nextLargerNodes(ListNode* head) {
4        vector<int> a, ans;
5        stack<int> st;
6
7        while(head) {
8            a.push_back(head->val);
9            head = head->next;
10        }
11
12        ans.resize(a.size());
13
14        for(int i = 0; i < a.size(); i++) {
15            while(!st.empty() && a[i] > a[st.top()]) {
16                ans[st.top()] = a[i];
17                st.pop();
18            }
19            st.push(i);
20        }
21
22        return ans;
23    }
24};