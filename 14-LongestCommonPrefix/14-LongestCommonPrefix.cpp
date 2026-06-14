// Last updated: 6/14/2026, 5:56:20 PM
1class Solution {
2public:
3    bool isUgly(int n) {
4        
5        if(n<=0){
6            return false;
7        }
8        while(n%2 ==0){
9            n/=2;
10        }
11        while(n%3 ==0){
12            n/=3;
13        }
14        while(n%5 ==0){
15            n/=5;
16        }
17        return n == 1;
18    }
19};