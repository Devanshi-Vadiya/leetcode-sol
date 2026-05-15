// Last updated: 5/15/2026, 2:46:41 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4      int maxWords = 0;
5
6      for(int i =0;i<sentences.size();i++){
7
8        int count = 1; //no. of words = spaces + 1
9
10        for(int j=0;j<sentences[i].size();j++){
11            if(sentences[i][j] == ' '){
12                count ++;
13            }
14        }
15            maxWords = max(maxWords, count);
16
17      }  
18      return maxWords;
19    }
20};