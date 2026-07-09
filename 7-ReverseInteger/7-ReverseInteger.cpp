// Last updated: 7/9/2026, 9:14:29 AM
1class Solution {
2public:
3    int reverse(int x) {
4        int ans = 0, rem;
5
6        while(x){
7
8            rem = x%10;
9            if(ans>INT_MAX/10  || ans< INT_MIN/10  )
10           { return 0;
11           }
12            ans=ans*10+rem;
13            x/=10;
14        }
15        return ans;
16    }
17};