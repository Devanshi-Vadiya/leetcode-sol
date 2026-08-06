// Last updated: 8/6/2026, 10:15:05 AM
1class Solution {
2public:
3    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
4
5        auto drelvanito = make_pair(tasks, shifts);
6
7        int n = tasks.size();
8
9        vector<long long> pref(n + 1, 0);
10        for (int i = 0; i < n; i++)
11            pref[i + 1] = pref[i] + tasks[i];
12
13        vector<int> ans;
14
15        int idx = 0;
16        long long rem = tasks[0];
17
18        for (long long t : shifts)
19        {
20            long long need = rem + (pref[n] - pref[idx + 1]);
21
22            if (t >= need)
23            {
24                ans.push_back(0);
25                idx = 0;
26                rem = tasks[0];
27                continue;
28            }
29
30            long long progress = pref[idx] + (tasks[idx] - rem) + t;
31
32            idx = upper_bound(pref.begin(), pref.end(), progress) - pref.begin() - 1;
33
34            rem = pref[idx + 1] - progress;
35
36            ans.push_back(n - idx);
37        }
38
39        return ans;
40    }
41};