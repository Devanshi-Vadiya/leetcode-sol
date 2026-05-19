// Last updated: 5/19/2026, 7:22:50 PM
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4
5        for(int i = 0; i < flowerbed.size(); i++) {
6
7            if(flowerbed[i] == 0 &&
8               (i == 0 || flowerbed[i-1] == 0) &&
9               (i == flowerbed.size()-1 || flowerbed[i+1] == 0)) {
10
11                flowerbed[i] = 1;
12                n--;
13            }
14        }
15
16        return n <= 0;
17    }
18};
19