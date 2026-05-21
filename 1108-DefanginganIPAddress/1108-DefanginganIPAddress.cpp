// Last updated: 5/21/2026, 10:06:19 PM
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string answer = "";
5
6        for(int i = 0; i < address.length(); i++) {
7            if(address[i] == '.') {
8                answer += "[.]";
9            }
10            else {
11                answer += address[i];
12            }
13        }
14
15        return answer;
16    }
17};