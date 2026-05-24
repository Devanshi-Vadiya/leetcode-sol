// Last updated: 5/24/2026, 3:43:57 PM
1class Solution {
2public:
3    void duplicateZeros(vector<int>& arr) {
4        int n = arr.size();
5        vector<int> answer;
6
7        for (int i = 0; i < n; i++) {
8            answer.push_back(arr[i]);
9
10            if (arr[i] == 0) {
11                answer.push_back(0);
12            }
13        }
14
15        for (int i = 0; i < n; i++) {
16            arr[i] = answer[i];
17        }
18    }
19};