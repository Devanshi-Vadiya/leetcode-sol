// Last updated: 6/7/2026, 10:30:05 PM
1class Solution {
2public:
3    bool isValid(string s) {
4
5            stack <char> st;
6
7            for(char ch : s){
8                if(ch=='{' || ch == '(' || ch == '['){
9                    st.push(ch);
10                }
11
12
13                else{
14                    if(st.empty()) {
15                        return false;
16                    }
17
18                    if(ch == ')' && st.top() =='('){
19                        st.pop();
20                    }
21                   else if(ch == '}' && st.top() =='{'){
22                        st.pop();
23                    }
24                   else if(ch == ']' && st.top() =='['){
25                        st.pop();
26                    }
27                    else{
28                        return false;
29                    }
30
31                }
32            }
33            return st.empty();
34    }
35};