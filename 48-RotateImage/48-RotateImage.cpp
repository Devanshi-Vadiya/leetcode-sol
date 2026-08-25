// Last updated: 8/25/2026, 1:44:02 PM
1 
2class Solution { 
3public: 
4    vector<int> findDiagonalOrder(vector<vector<int>>& mat) { 
5        int m = mat.size(); 
6        int n = mat[0].size(); 
7         
8        map<int, vector<int>> mp; 
9         
10        vector<int> result; 
11         
12        //fill the map using [i+j] 
13        for(int i = 0; i<m; i++) { 
14            for(int j = 0; j<n; j++) { 
15                mp[i+j].push_back(mat[i][j]); 
16            } 
17        } 
18         
19        bool flip = true; 
20        for(auto &it : mp) { 
21            if(flip) { 
22                //it.second ko reverse kardo 
23                reverse(it.second.begin(), it.second.end()); 
24            } 
25             
26            for(int &num : it.second) { 
27                result.push_back(num); 
28            } 
29             
30            flip = !flip; 
31        } 
32         
33        return result; 
34    } 
35}; 