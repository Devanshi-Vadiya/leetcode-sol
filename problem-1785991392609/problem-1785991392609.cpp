// Last updated: 8/6/2026, 10:13:12 AM
1class Solution {
2public:
3    struct Fenwick {
4        int n;
5        vector<long long> bit;
6
7        Fenwick(int n) {
8            this->n = n;
9            bit.assign(n + 1, 0);
10        }
11
12        void update(int idx, int val) {
13            while (idx <= n) {
14                bit[idx] += val;
15                idx += idx & -idx;
16            }
17        }
18
19        long long query(int idx) {
20            long long sum = 0;
21            while (idx > 0) {
22                sum += bit[idx];
23                idx -= idx & -idx;
24            }
25            return sum;
26        }
27    };
28
29    long long countRatioSubarrays(vector<int>& nums, int a, int b) {
30
31        int n = nums.size();
32
33        vector<long long> pref(n + 1, 0);
34
35        for (int i = 1; i <= n; i++) {
36            if (nums[i - 1] % 2 == 0)
37                pref[i] = pref[i - 1] + b;
38            else
39                pref[i] = pref[i - 1] - a;
40        }
41
42        vector<long long> comp = pref;
43        sort(comp.begin(), comp.end());
44        comp.erase(unique(comp.begin(), comp.end()), comp.end());
45
46        Fenwick ft(comp.size());
47
48        long long ans = 0;
49        long long inserted = 0;
50
51        for (long long x : pref) {
52
53            int idx = lower_bound(comp.begin(), comp.end(), x) - comp.begin() + 1;
54
55            ans += inserted - ft.query(idx - 1);
56
57            ft.update(idx, 1);
58            inserted++;
59        }
60
61        return ans;
62    }
63};