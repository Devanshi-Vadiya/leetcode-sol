// Last updated: 6/23/2026, 7:30:41 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4         //1 = 1 
5        //2 = 2
6        //3 = 3
7        //4 = 5
8        //5 = 8 
9
10        if(n<=2){
11            return n;
12        }
13
14        int first = 1;
15        int second = 2;
16
17
18        for(int i = 3;i<=n;i++){
19            int current = first + second;
20            first = second;
21            second = current ;
22        }
23        return second;
24    }
25};