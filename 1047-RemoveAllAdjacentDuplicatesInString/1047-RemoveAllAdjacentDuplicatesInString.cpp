// Last updated: 6/5/2026, 2:44:29 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack <char> st;
5
6        for(char ch : s){
7            if(!st.empty() && st.top() == ch){
8                st.pop();
9            }
10            else{
11                st.push(ch);
12            }
13        }
14
15        string ans = "";
16
17        while(!st.empty()){
18            ans = st.top() + ans;
19            st.pop();
20        }
21        return ans;
22    }
23};