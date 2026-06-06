// Last updated: 6/6/2026, 1:56:21 PM
1class Solution {
2public:
3    string removeDuplicates(string s, int k) {
4        stack <pair< char , int>> st;
5
6        for(char ch : s){
7            if(!st.empty() && st.top().first == ch){
8                st.top().second++;
9            }
10
11            else{
12                st.push({ch,1});
13            }
14
15            if(!st.empty() && st.top().second == k){
16                st.pop();
17            }
18        }
19
20        string ans = "";
21
22        while(!st.empty()){
23
24            char ch = st.top().first;
25            int cnt = st.top().second;
26
27            while(cnt--){
28                ans+=ch;
29            }
30            st.pop();   
31             }
32             reverse(ans.begin(),ans.end());
33             return ans;     
34    }
35};