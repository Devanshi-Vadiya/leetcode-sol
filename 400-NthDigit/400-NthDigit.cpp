// Last updated: 5/24/2026, 4:23:54 PM
1class Solution {
2public:
3    int numUniqueEmails(vector<string>& emails) {
4
5        unordered_set<string> s;
6
7        for(string email : emails) {
8
9            string local = "";
10            string domain = "";
11
12            int i = 0;
13
14            while(email[i] != '@') {
15
16                if(email[i] == '+') {
17                    while(email[i] != '@') {
18                        i++;
19                    }
20                    break;
21                }
22
23                if(email[i] != '.') {
24                    local += email[i];
25                }
26
27                i++;
28            }
29
30            while(i < email.length()) {
31                domain += email[i];
32                i++;
33            }
34
35            s.insert(local + domain);
36        }
37
38        return s.size();
39    }
40};