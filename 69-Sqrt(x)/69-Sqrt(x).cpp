// Last updated: 6/29/2026, 11:06:55 AM
1class Solution {
2public:
3    vector<int> arrayRankTransform(vector<int>& arr) {
4        vector<int> temp = arr;
5        sort(temp.begin(), temp.end());
6
7        unordered_map<int, int> rank;
8        int r = 1;
9
10        for (int num : temp) {
11            if (!rank.count(num))
12                rank[num] = r++;
13        }
14
15        for (int i = 0; i < arr.size(); i++)
16            arr[i] = rank[arr[i]];
17
18        return arr;
19    }
20};