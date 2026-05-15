// Last updated: 5/15/2026, 2:24:18 PM
1class Solution {
2public:
3    bool isAcronym(vector<string>& words, string s) {
4        string ans = "";
5        for(int i =0;i<words.size();i++){
6            ans+=words[i][0];
7        }
8        return ans == s;
9    }
10};