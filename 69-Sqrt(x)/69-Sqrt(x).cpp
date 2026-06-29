// Last updated: 6/29/2026, 10:55:58 AM
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        unordered_set<int> s(candyType.begin(), candyType.end());
5        return min((int)s.size(), (int)candyType.size() / 2);
6    }
7};