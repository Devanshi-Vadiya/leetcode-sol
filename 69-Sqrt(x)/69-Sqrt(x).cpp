// Last updated: 6/29/2026, 10:53:48 AM
1class Solution {
2public:
3    int squareSum(int n) {
4        int sum = 0;
5
6        while (n > 0) {
7            int digit = n % 10;
8            sum += digit * digit;
9            n /= 10;
10        }
11
12        return sum;
13    }
14
15    bool isHappy(int n) {
16        unordered_set<int> visited;
17
18        while (n != 1 && !visited.count(n)) {
19            visited.insert(n);
20            n = squareSum(n);
21        }
22
23        return n == 1;
24    }
25};