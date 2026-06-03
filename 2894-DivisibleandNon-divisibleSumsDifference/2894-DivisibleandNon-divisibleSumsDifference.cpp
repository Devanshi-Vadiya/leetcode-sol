// Last updated: 6/3/2026, 8:06:09 PM
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int num1 = 0;
5        int num2 =0;
6
7        for(int i =0;i<=n;i++){
8            if(i % m == 0){
9                num2+= i;
10            }
11            else{
12                num1 +=i;
13            }
14        }
15
16        return num1 - num2;
17    }
18};