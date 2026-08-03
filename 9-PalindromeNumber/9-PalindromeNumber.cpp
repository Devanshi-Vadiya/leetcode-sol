// Last updated: 8/3/2026, 9:11:53 AM
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x<0){
5            return false;
6        }
7
8        long long originalNumber = x;
9        long long reversedNumber =0;
10
11        while(x>0){
12            int lastDigit =x%10;
13            reversedNumber = reversedNumber *10 + lastDigit;
14            x = x / 10;
15        }
16        return originalNumber == reversedNumber;
17    }
18};