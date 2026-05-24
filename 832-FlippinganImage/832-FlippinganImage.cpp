// Last updated: 5/24/2026, 3:41:29 PM
1class Solution {
2public:
3    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
4        for(int i = 0; i < image.size(); i++) {
5
6            reverse(image[i].begin(), image[i].end());
7
8            for(int j = 0; j < image[i].size(); j++) {
9                image[i][j] = 1 - image[i][j];
10            }
11        }
12
13        return image;
14    }
15};