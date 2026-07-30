// Last updated: 7/30/2026, 2:04:10 PM
1class Solution {
2public:
3    string compressedString(string word) {
4
5        string ans = "";
6
7        int count = 1;
8
9        for(int i = 0; i < word.size(); i++)
10        {
11            if(i + 1 < word.size() && word[i] == word[i + 1] && count < 9)
12            {
13                count++;
14            }
15            else
16            {
17                ans += to_string(count);
18                ans.push_back(word[i]);
19                count = 1;
20            }
21        }
22
23        return ans;
24    }
25};