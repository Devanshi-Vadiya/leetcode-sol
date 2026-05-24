// Last updated: 5/24/2026, 4:26:06 PM
1class Solution {
2public:
3    int numUniqueEmails(vector<string>& emails) {
4
5         unordered_set<string> st;
6    for(string &email : emails) {
7        string cleanEmail;
8        for(char c : email) {
9            if(c == '+' || c == '@') break;
10            if(c == '.') continue;
11            cleanEmail += c;
12        }
13        cleanEmail += email.substr(email.find('@'));
14        st.insert(cleanEmail);
15    }
16    return st.size();
17}   
18    
19};