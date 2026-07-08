// Last updated: 7/8/2026, 2:41:46 PM
1class Solution {
2public:
3    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
4        int count = 0;
5
6        for (int i = 0; i < startTime.size(); i++) {
7            if (startTime[i] <= queryTime && queryTime <= endTime[i])
8                count++;
9        }
10
11        return count;
12    }
13};