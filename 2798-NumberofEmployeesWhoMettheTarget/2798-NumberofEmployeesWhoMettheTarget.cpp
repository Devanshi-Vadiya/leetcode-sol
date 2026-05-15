// Last updated: 5/15/2026, 2:33:16 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWords =0;
5        for(int i = 0;i < sentences.size();i++){
6         int count = 1;
7         for(int j = 0;j<sentences[i].size();j++){
8            if(sentences[i][j] ==' '){
9                count ++;
10            }
11         } 
12         maxWords = max(maxWords,count);  
13        }
14
15        return maxWords;
16    }
17};