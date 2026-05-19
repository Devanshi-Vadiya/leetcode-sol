// Last updated: 5/19/2026, 3:32:39 PM
1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        unordered_set<char> jewelSet;
5
6        for(int i =0;i<jewels.size();i++){
7            jewelSet.insert(jewels[i]);
8        }
9
10        int count = 0;
11
12        for(int i =0;i<stones.size();i++){
13            if(jewelSet.count(stones[i])){
14                count++;
15            }
16        }
17        return count;
18    }
19};