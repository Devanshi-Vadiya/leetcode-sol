// Last updated: 7/20/2026, 9:13:18 AM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5
6        for (string s : strs) {
7            string temp = s;
8            sort(temp.begin(), temp.end());
9            mp[temp].push_back(s);
10        }
11        //for(string word: nums){
12        //     string=word;
13        //     sort(temp.begin(),temp.end());
14        //      anagram[temp].push_back(word);
15        // }
16
17        vector<vector<string>> ans;
18
19        for (auto & x : mp) {
20            ans.push_back(x.second);
21        }
22        //for(auto )
23        return ans;
24    }
25};
26