// Last updated: 5/21/2026, 8:49:49 PM
1class Solution {
2public:
3    int addDigits(int num) {
4        
5        while(num>9){
6        int ans = 0, rem;
7        
8        while(num!=0){
9            rem = num%10;
10            num/=10;
11            ans+=rem;
12        }
13        num =ans;
14        }
15        return num;
16    }
17};