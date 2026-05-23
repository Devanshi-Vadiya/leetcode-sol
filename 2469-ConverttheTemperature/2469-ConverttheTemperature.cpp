// Last updated: 5/23/2026, 9:11:23 PM
1class Solution {
2public:
3    string destCity(vector<vector<string>>& paths) {
4        unordered_set <string> start;
5
6        for(int i = 0; i < paths.size(); i++) {
7            start.insert(paths[i][0]);
8        }
9
10        for(int i = 0; i < paths.size(); i++) {
11            string city = paths[i][1];
12
13            if(start.find(city) == start.end()) {
14                return city;
15            }
16        }
17
18        return "";
19    }
20};